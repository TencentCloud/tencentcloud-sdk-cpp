/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/NoticeReceiver.h>
#include <tencentcloud/cls/v20201016/model/WebCallback.h>
#include <tencentcloud/cls/v20201016/model/EscalateNoticeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 通知规则
                */
                class NoticeRule : public AbstractModel
                {
                public:
                    NoticeRule();
                    ~NoticeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配规则 JSON串。
**rule规则树格式为嵌套结构体JSON字符串**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**rule规则树限制规则如下**：
- 顶层rule中Type可取值：`Condition`，`Operation`
- Type为`Operation`的子节点支持的Type可取值：`Condition`，`Operation`
- Type为`Condition`的子节点支持的Type可取值：`String`，`Compare`，`Array`，`TimeRange`，`Value`，`Key`
- 其他Type无子节点
- 当rule Type为`Operation`时，value可取值：`AND`，`OR`
- 当rule Type为`Condition`时，value不可为空，子节点个数不能小于2
    - 当子节点Type为  `Compare` 时，value可取值：`>`，`<`，`>=`，`<=`，`=`，`!=`，`Between`，`NotBetween`，`=~`，`!=~`，`In`，`NotIn`
    - value为`Between`，`NotBetween`时，下一个子节点value必须是长度为2的数组
    - value为`=~`，`!=~`时，下一个子节点value必须是一个正则表达式
    - value为`In`，`NotIn`时， 下一个子节点value必须是一个数组

**业务参数含义**：
- Type：Condition 表示是规则条件，Value：Level 表示告警等级
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：0（警告），1（提醒），2 （紧急）
以下示例表示：告警等级属于提醒
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyType 表示通知类型
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：1（告警通知），2 （恢复通知）
以下示例表示：通知类型属于告警通知或通知类型不属于恢复通知
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：AlarmID 表示告警策略
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：告警策略id数组
以下示例表示：告警策略属于alarm-53af048c-254b-4c73-bb48-xxx,alarm-6dfa8bc5-08da-4d64-b6cb-xxx或告警策略不属于alarm-1036314c-1e49-4cee-a8fb-xxx
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

- Type：Condition 表示是规则条件，Value：AlarmName 表示告警策略名称
    - 子节点Type支持`Compare`，Value支持`=~`，`!=~`
    - 下一个子节点value支持的值：必须是正则表达式
以下示例表示：告警策略名称正则匹配^test$或告警策略名称正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Label 表示告警分类字段
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`，`=~`，`!=~`
    - 下一个子节点value支持的值：`In`，`NotIn` 时value是数组，`=~`，`!=~`时value是正则表达式
以下示例表示：告警分类字段key1属于v1或告警分类字段key2不属于v2或告警分类字段key3正则匹配^test$或告警分类字段key4正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyTime 表示通知时间
    - 子节点Type支持`Compare`，Value支持`Between `，`NotBetween `
    - 下一个子节点value支持的值：长度为2，格式为`14:20:36`的字符串数组
以下示例表示：通知时间在指定范围内14:18:36至14:33:36或通知时间不在指定范围内14:20:36至14:30:36
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Duration 表示告警持续时间
    - 子节点Type支持`Compare`，Value支持`>`，`<`，`>=`，`<=`
    - 下一个子节点value支持的值：整型值单位分钟
以下示例表示：告警持续时间大于1分钟或告警持续时间大于等于2分钟或告警持续时间小于3分钟或告警持续时间小于等于4分钟
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * @return Rule 匹配规则 JSON串。
**rule规则树格式为嵌套结构体JSON字符串**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**rule规则树限制规则如下**：
- 顶层rule中Type可取值：`Condition`，`Operation`
- Type为`Operation`的子节点支持的Type可取值：`Condition`，`Operation`
- Type为`Condition`的子节点支持的Type可取值：`String`，`Compare`，`Array`，`TimeRange`，`Value`，`Key`
- 其他Type无子节点
- 当rule Type为`Operation`时，value可取值：`AND`，`OR`
- 当rule Type为`Condition`时，value不可为空，子节点个数不能小于2
    - 当子节点Type为  `Compare` 时，value可取值：`>`，`<`，`>=`，`<=`，`=`，`!=`，`Between`，`NotBetween`，`=~`，`!=~`，`In`，`NotIn`
    - value为`Between`，`NotBetween`时，下一个子节点value必须是长度为2的数组
    - value为`=~`，`!=~`时，下一个子节点value必须是一个正则表达式
    - value为`In`，`NotIn`时， 下一个子节点value必须是一个数组

**业务参数含义**：
- Type：Condition 表示是规则条件，Value：Level 表示告警等级
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：0（警告），1（提醒），2 （紧急）
以下示例表示：告警等级属于提醒
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyType 表示通知类型
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：1（告警通知），2 （恢复通知）
以下示例表示：通知类型属于告警通知或通知类型不属于恢复通知
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：AlarmID 表示告警策略
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：告警策略id数组
以下示例表示：告警策略属于alarm-53af048c-254b-4c73-bb48-xxx,alarm-6dfa8bc5-08da-4d64-b6cb-xxx或告警策略不属于alarm-1036314c-1e49-4cee-a8fb-xxx
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

- Type：Condition 表示是规则条件，Value：AlarmName 表示告警策略名称
    - 子节点Type支持`Compare`，Value支持`=~`，`!=~`
    - 下一个子节点value支持的值：必须是正则表达式
以下示例表示：告警策略名称正则匹配^test$或告警策略名称正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Label 表示告警分类字段
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`，`=~`，`!=~`
    - 下一个子节点value支持的值：`In`，`NotIn` 时value是数组，`=~`，`!=~`时value是正则表达式
以下示例表示：告警分类字段key1属于v1或告警分类字段key2不属于v2或告警分类字段key3正则匹配^test$或告警分类字段key4正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyTime 表示通知时间
    - 子节点Type支持`Compare`，Value支持`Between `，`NotBetween `
    - 下一个子节点value支持的值：长度为2，格式为`14:20:36`的字符串数组
以下示例表示：通知时间在指定范围内14:18:36至14:33:36或通知时间不在指定范围内14:20:36至14:30:36
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Duration 表示告警持续时间
    - 子节点Type支持`Compare`，Value支持`>`，`<`，`>=`，`<=`
    - 下一个子节点value支持的值：整型值单位分钟
以下示例表示：告警持续时间大于1分钟或告警持续时间大于等于2分钟或告警持续时间小于3分钟或告警持续时间小于等于4分钟
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置匹配规则 JSON串。
**rule规则树格式为嵌套结构体JSON字符串**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**rule规则树限制规则如下**：
- 顶层rule中Type可取值：`Condition`，`Operation`
- Type为`Operation`的子节点支持的Type可取值：`Condition`，`Operation`
- Type为`Condition`的子节点支持的Type可取值：`String`，`Compare`，`Array`，`TimeRange`，`Value`，`Key`
- 其他Type无子节点
- 当rule Type为`Operation`时，value可取值：`AND`，`OR`
- 当rule Type为`Condition`时，value不可为空，子节点个数不能小于2
    - 当子节点Type为  `Compare` 时，value可取值：`>`，`<`，`>=`，`<=`，`=`，`!=`，`Between`，`NotBetween`，`=~`，`!=~`，`In`，`NotIn`
    - value为`Between`，`NotBetween`时，下一个子节点value必须是长度为2的数组
    - value为`=~`，`!=~`时，下一个子节点value必须是一个正则表达式
    - value为`In`，`NotIn`时， 下一个子节点value必须是一个数组

**业务参数含义**：
- Type：Condition 表示是规则条件，Value：Level 表示告警等级
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：0（警告），1（提醒），2 （紧急）
以下示例表示：告警等级属于提醒
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyType 表示通知类型
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：1（告警通知），2 （恢复通知）
以下示例表示：通知类型属于告警通知或通知类型不属于恢复通知
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：AlarmID 表示告警策略
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：告警策略id数组
以下示例表示：告警策略属于alarm-53af048c-254b-4c73-bb48-xxx,alarm-6dfa8bc5-08da-4d64-b6cb-xxx或告警策略不属于alarm-1036314c-1e49-4cee-a8fb-xxx
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

- Type：Condition 表示是规则条件，Value：AlarmName 表示告警策略名称
    - 子节点Type支持`Compare`，Value支持`=~`，`!=~`
    - 下一个子节点value支持的值：必须是正则表达式
以下示例表示：告警策略名称正则匹配^test$或告警策略名称正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Label 表示告警分类字段
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`，`=~`，`!=~`
    - 下一个子节点value支持的值：`In`，`NotIn` 时value是数组，`=~`，`!=~`时value是正则表达式
以下示例表示：告警分类字段key1属于v1或告警分类字段key2不属于v2或告警分类字段key3正则匹配^test$或告警分类字段key4正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyTime 表示通知时间
    - 子节点Type支持`Compare`，Value支持`Between `，`NotBetween `
    - 下一个子节点value支持的值：长度为2，格式为`14:20:36`的字符串数组
以下示例表示：通知时间在指定范围内14:18:36至14:33:36或通知时间不在指定范围内14:20:36至14:30:36
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Duration 表示告警持续时间
    - 子节点Type支持`Compare`，Value支持`>`，`<`，`>=`，`<=`
    - 下一个子节点value支持的值：整型值单位分钟
以下示例表示：告警持续时间大于1分钟或告警持续时间大于等于2分钟或告警持续时间小于3分钟或告警持续时间小于等于4分钟
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * @param _rule 匹配规则 JSON串。
**rule规则树格式为嵌套结构体JSON字符串**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**rule规则树限制规则如下**：
- 顶层rule中Type可取值：`Condition`，`Operation`
- Type为`Operation`的子节点支持的Type可取值：`Condition`，`Operation`
- Type为`Condition`的子节点支持的Type可取值：`String`，`Compare`，`Array`，`TimeRange`，`Value`，`Key`
- 其他Type无子节点
- 当rule Type为`Operation`时，value可取值：`AND`，`OR`
- 当rule Type为`Condition`时，value不可为空，子节点个数不能小于2
    - 当子节点Type为  `Compare` 时，value可取值：`>`，`<`，`>=`，`<=`，`=`，`!=`，`Between`，`NotBetween`，`=~`，`!=~`，`In`，`NotIn`
    - value为`Between`，`NotBetween`时，下一个子节点value必须是长度为2的数组
    - value为`=~`，`!=~`时，下一个子节点value必须是一个正则表达式
    - value为`In`，`NotIn`时， 下一个子节点value必须是一个数组

**业务参数含义**：
- Type：Condition 表示是规则条件，Value：Level 表示告警等级
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：0（警告），1（提醒），2 （紧急）
以下示例表示：告警等级属于提醒
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyType 表示通知类型
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：1（告警通知），2 （恢复通知）
以下示例表示：通知类型属于告警通知或通知类型不属于恢复通知
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：AlarmID 表示告警策略
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：告警策略id数组
以下示例表示：告警策略属于alarm-53af048c-254b-4c73-bb48-xxx,alarm-6dfa8bc5-08da-4d64-b6cb-xxx或告警策略不属于alarm-1036314c-1e49-4cee-a8fb-xxx
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

- Type：Condition 表示是规则条件，Value：AlarmName 表示告警策略名称
    - 子节点Type支持`Compare`，Value支持`=~`，`!=~`
    - 下一个子节点value支持的值：必须是正则表达式
以下示例表示：告警策略名称正则匹配^test$或告警策略名称正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Label 表示告警分类字段
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`，`=~`，`!=~`
    - 下一个子节点value支持的值：`In`，`NotIn` 时value是数组，`=~`，`!=~`时value是正则表达式
以下示例表示：告警分类字段key1属于v1或告警分类字段key2不属于v2或告警分类字段key3正则匹配^test$或告警分类字段key4正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyTime 表示通知时间
    - 子节点Type支持`Compare`，Value支持`Between `，`NotBetween `
    - 下一个子节点value支持的值：长度为2，格式为`14:20:36`的字符串数组
以下示例表示：通知时间在指定范围内14:18:36至14:33:36或通知时间不在指定范围内14:20:36至14:30:36
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Duration 表示告警持续时间
    - 子节点Type支持`Compare`，Value支持`>`，`<`，`>=`，`<=`
    - 下一个子节点value支持的值：整型值单位分钟
以下示例表示：告警持续时间大于1分钟或告警持续时间大于等于2分钟或告警持续时间小于3分钟或告警持续时间小于等于4分钟
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取告警通知接收者信息。
                     * @return NoticeReceivers 告警通知接收者信息。
                     * 
                     */
                    std::vector<NoticeReceiver> GetNoticeReceivers() const;

                    /**
                     * 设置告警通知接收者信息。
                     * @param _noticeReceivers 告警通知接收者信息。
                     * 
                     */
                    void SetNoticeReceivers(const std::vector<NoticeReceiver>& _noticeReceivers);

                    /**
                     * 判断参数 NoticeReceivers 是否已赋值
                     * @return NoticeReceivers 是否已赋值
                     * 
                     */
                    bool NoticeReceiversHasBeenSet() const;

                    /**
                     * 获取告警通知模板回调信息，包括企业微信、钉钉、飞书。
                     * @return WebCallbacks 告警通知模板回调信息，包括企业微信、钉钉、飞书。
                     * 
                     */
                    std::vector<WebCallback> GetWebCallbacks() const;

                    /**
                     * 设置告警通知模板回调信息，包括企业微信、钉钉、飞书。
                     * @param _webCallbacks 告警通知模板回调信息，包括企业微信、钉钉、飞书。
                     * 
                     */
                    void SetWebCallbacks(const std::vector<WebCallback>& _webCallbacks);

                    /**
                     * 判断参数 WebCallbacks 是否已赋值
                     * @return WebCallbacks 是否已赋值
                     * 
                     */
                    bool WebCallbacksHasBeenSet() const;

                    /**
                     * 获取告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * @return Escalate 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * 
                     */
                    bool GetEscalate() const;

                    /**
                     * 设置告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * @param _escalate 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     * 
                     */
                    void SetEscalate(const bool& _escalate);

                    /**
                     * 判断参数 Escalate 是否已赋值
                     * @return Escalate 是否已赋值
                     * 
                     */
                    bool EscalateHasBeenSet() const;

                    /**
                     * 获取告警升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * @return Type 告警升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置告警升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * @param _type 告警升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警升级间隔。单位：分钟，范围`[1，14400]`
                     * @return Interval 告警升级间隔。单位：分钟，范围`[1，14400]`
                     * 
                     */
                    uint64_t GetInterval() const;

                    /**
                     * 设置告警升级间隔。单位：分钟，范围`[1，14400]`
                     * @param _interval 告警升级间隔。单位：分钟，范围`[1，14400]`
                     * 
                     */
                    void SetInterval(const uint64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取告警升级后下一个环节的通知渠道配置
                     * @return EscalateNotice 告警升级后下一个环节的通知渠道配置
                     * 
                     */
                    EscalateNoticeInfo GetEscalateNotice() const;

                    /**
                     * 设置告警升级后下一个环节的通知渠道配置
                     * @param _escalateNotice 告警升级后下一个环节的通知渠道配置
                     * 
                     */
                    void SetEscalateNotice(const EscalateNoticeInfo& _escalateNotice);

                    /**
                     * 判断参数 EscalateNotice 是否已赋值
                     * @return EscalateNotice 是否已赋值
                     * 
                     */
                    bool EscalateNoticeHasBeenSet() const;

                private:

                    /**
                     * 匹配规则 JSON串。
**rule规则树格式为嵌套结构体JSON字符串**
`{"Value":"AND","Type":"Operation","Children":[{"Value":"OR","Type":"Operation","Children":[{"Type":"Condition","Value":"Level","Children":[{"Value":"In","Type":"Compare"},{"Value":"[1,0]","Type":"Value"}]},{"Type":"Condition","Value":"Level","Children":[{"Value":"NotIn","Type":"Compare"},{"Value":"[2]","Type":"Value"}]}]}]}`

**rule规则树限制规则如下**：
- 顶层rule中Type可取值：`Condition`，`Operation`
- Type为`Operation`的子节点支持的Type可取值：`Condition`，`Operation`
- Type为`Condition`的子节点支持的Type可取值：`String`，`Compare`，`Array`，`TimeRange`，`Value`，`Key`
- 其他Type无子节点
- 当rule Type为`Operation`时，value可取值：`AND`，`OR`
- 当rule Type为`Condition`时，value不可为空，子节点个数不能小于2
    - 当子节点Type为  `Compare` 时，value可取值：`>`，`<`，`>=`，`<=`，`=`，`!=`，`Between`，`NotBetween`，`=~`，`!=~`，`In`，`NotIn`
    - value为`Between`，`NotBetween`时，下一个子节点value必须是长度为2的数组
    - value为`=~`，`!=~`时，下一个子节点value必须是一个正则表达式
    - value为`In`，`NotIn`时， 下一个子节点value必须是一个数组

**业务参数含义**：
- Type：Condition 表示是规则条件，Value：Level 表示告警等级
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：0（警告），1（提醒），2 （紧急）
以下示例表示：告警等级属于提醒
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Level\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyType 表示通知类型
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：1（告警通知），2 （恢复通知）
以下示例表示：通知类型属于告警通知或通知类型不属于恢复通知
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[1]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyType\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[2]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：AlarmID 表示告警策略
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`
    - 下一个子节点value支持的值：告警策略id数组
以下示例表示：告警策略属于alarm-53af048c-254b-4c73-bb48-xxx,alarm-6dfa8bc5-08da-4d64-b6cb-xxx或告警策略不属于alarm-1036314c-1e49-4cee-a8fb-xxx
`"{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-53af048c-254b-4c73-bb48-xxx\\\",\\\"alarm-6dfa8bc5-08da-4d64-b6cb-xxx\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmID\",\"Children\":[{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"alarm-1036314c-1e49-4cee-a8fb-xxx\\\"]\",\"Type\":\"Value\"}]}]}]}"`

- Type：Condition 表示是规则条件，Value：AlarmName 表示告警策略名称
    - 子节点Type支持`Compare`，Value支持`=~`，`!=~`
    - 下一个子节点value支持的值：必须是正则表达式
以下示例表示：告警策略名称正则匹配^test$或告警策略名称正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"AlarmName\",\"Children\":[{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Label 表示告警分类字段
    - 子节点Type支持`Compare`，Value支持`In`，`NotIn`，`=~`，`!=~`
    - 下一个子节点value支持的值：`In`，`NotIn` 时value是数组，`=~`，`!=~`时value是正则表达式
以下示例表示：告警分类字段key1属于v1或告警分类字段key2不属于v2或告警分类字段key3正则匹配^test$或告警分类字段key4正则不匹配^hahaha$
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key1\",\"Type\":\"Key\"},{\"Value\":\"In\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v1\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key2\",\"Type\":\"Key\"},{\"Value\":\"NotIn\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"v2\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key3\",\"Type\":\"Key\"},{\"Value\":\"=~\",\"Type\":\"Compare\"},{\"Value\":\"^test$\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Label\",\"Children\":[{\"Value\":\"key4\",\"Type\":\"Key\"},{\"Value\":\"!=~\",\"Type\":\"Compare\"},{\"Value\":\"^hahaha$\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：NotifyTime 表示通知时间
    - 子节点Type支持`Compare`，Value支持`Between `，`NotBetween `
    - 下一个子节点value支持的值：长度为2，格式为`14:20:36`的字符串数组
以下示例表示：通知时间在指定范围内14:18:36至14:33:36或通知时间不在指定范围内14:20:36至14:30:36
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"Between\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:18:36\\\",\\\"14:33:36\\\"]\",\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"NotifyTime\",\"Children\":[{\"Value\":\"NotBetween\",\"Type\":\"Compare\"},{\"Value\":\"[\\\"14:20:36\\\",\\\"14:30:36\\\"]\",\"Type\":\"Value\"}]}]}]}`

- Type：Condition 表示是规则条件，Value：Duration 表示告警持续时间
    - 子节点Type支持`Compare`，Value支持`>`，`<`，`>=`，`<=`
    - 下一个子节点value支持的值：整型值单位分钟
以下示例表示：告警持续时间大于1分钟或告警持续时间大于等于2分钟或告警持续时间小于3分钟或告警持续时间小于等于4分钟
`{\"Value\":\"AND\",\"Type\":\"Operation\",\"Children\":[{\"Value\":\"OR\",\"Type\":\"Operation\",\"Children\":[{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">\",\"Type\":\"Compare\"},{\"Value\":1,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\">=\",\"Type\":\"Compare\"},{\"Value\":2,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<\",\"Type\":\"Compare\"},{\"Value\":3,\"Type\":\"Value\"}]},{\"Type\":\"Condition\",\"Value\":\"Duration\",\"Children\":[{\"Value\":\"<=\",\"Type\":\"Compare\"},{\"Value\":4,\"Type\":\"Value\"}]}]}]}`
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 告警通知接收者信息。
                     */
                    std::vector<NoticeReceiver> m_noticeReceivers;
                    bool m_noticeReceiversHasBeenSet;

                    /**
                     * 告警通知模板回调信息，包括企业微信、钉钉、飞书。
                     */
                    std::vector<WebCallback> m_webCallbacks;
                    bool m_webCallbacksHasBeenSet;

                    /**
                     * 告警升级开关。`true`：开启告警升级、`false`：关闭告警升级，默认：false
                     */
                    bool m_escalate;
                    bool m_escalateHasBeenSet;

                    /**
                     * 告警升级条件。`1`：无人认领且未恢复、`2`：未恢复，默认为1
- 无人认领且未恢复：告警没有恢复并且没有人认领则升级
- 未恢复：当前告警持续未恢复则升级

                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警升级间隔。单位：分钟，范围`[1，14400]`
                     */
                    uint64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 告警升级后下一个环节的通知渠道配置
                     */
                    EscalateNoticeInfo m_escalateNotice;
                    bool m_escalateNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICERULE_H_
