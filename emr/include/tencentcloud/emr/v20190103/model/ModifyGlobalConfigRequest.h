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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Item.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyGlobalConfig请求参数结构体
                */
                class ModifyGlobalConfigRequest : public AbstractModel
                {
                public:
                    ModifyGlobalConfigRequest();
                    ~ModifyGlobalConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取emr集群的英文id
                     * @return InstanceId emr集群的英文id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群的英文id
                     * @param _instanceId emr集群的英文id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取修改的配置列表。其中Key的取值与`DescribeGlobalConfig`接口的出参一一对应，不区分大小写（如果报错找不到Key，以出参为准），分别为：
1. 开启或关闭资源调度：enableResourceSchedule；在关闭时会有一个同步的选项，Key为sync，取值为true或false。
2. 调度器类型：scheduler。
2. 开启或关闭标签：enableLabel，取值为true或false。
2. 标签目录：labelDir。
3. 是否覆盖用户指定队列：queueMappingOverride，取值为true、false。
4. 程序上限：userMaxAppsDefault。
5. 动态配置项：`DescribeGlobalConfig`接口返回的DefaultSettings中的Name字段。
Value的取值都是字符串，对于**是否覆盖用户指定队列**、**程序上限**，json规范中的null表示清空该配置的值。支持修改单个配置项的值。对于**动态配置项**则需要全量传递以进行覆盖。
                     * @return Items 修改的配置列表。其中Key的取值与`DescribeGlobalConfig`接口的出参一一对应，不区分大小写（如果报错找不到Key，以出参为准），分别为：
1. 开启或关闭资源调度：enableResourceSchedule；在关闭时会有一个同步的选项，Key为sync，取值为true或false。
2. 调度器类型：scheduler。
2. 开启或关闭标签：enableLabel，取值为true或false。
2. 标签目录：labelDir。
3. 是否覆盖用户指定队列：queueMappingOverride，取值为true、false。
4. 程序上限：userMaxAppsDefault。
5. 动态配置项：`DescribeGlobalConfig`接口返回的DefaultSettings中的Name字段。
Value的取值都是字符串，对于**是否覆盖用户指定队列**、**程序上限**，json规范中的null表示清空该配置的值。支持修改单个配置项的值。对于**动态配置项**则需要全量传递以进行覆盖。
                     * 
                     */
                    std::vector<Item> GetItems() const;

                    /**
                     * 设置修改的配置列表。其中Key的取值与`DescribeGlobalConfig`接口的出参一一对应，不区分大小写（如果报错找不到Key，以出参为准），分别为：
1. 开启或关闭资源调度：enableResourceSchedule；在关闭时会有一个同步的选项，Key为sync，取值为true或false。
2. 调度器类型：scheduler。
2. 开启或关闭标签：enableLabel，取值为true或false。
2. 标签目录：labelDir。
3. 是否覆盖用户指定队列：queueMappingOverride，取值为true、false。
4. 程序上限：userMaxAppsDefault。
5. 动态配置项：`DescribeGlobalConfig`接口返回的DefaultSettings中的Name字段。
Value的取值都是字符串，对于**是否覆盖用户指定队列**、**程序上限**，json规范中的null表示清空该配置的值。支持修改单个配置项的值。对于**动态配置项**则需要全量传递以进行覆盖。
                     * @param _items 修改的配置列表。其中Key的取值与`DescribeGlobalConfig`接口的出参一一对应，不区分大小写（如果报错找不到Key，以出参为准），分别为：
1. 开启或关闭资源调度：enableResourceSchedule；在关闭时会有一个同步的选项，Key为sync，取值为true或false。
2. 调度器类型：scheduler。
2. 开启或关闭标签：enableLabel，取值为true或false。
2. 标签目录：labelDir。
3. 是否覆盖用户指定队列：queueMappingOverride，取值为true、false。
4. 程序上限：userMaxAppsDefault。
5. 动态配置项：`DescribeGlobalConfig`接口返回的DefaultSettings中的Name字段。
Value的取值都是字符串，对于**是否覆盖用户指定队列**、**程序上限**，json规范中的null表示清空该配置的值。支持修改单个配置项的值。对于**动态配置项**则需要全量传递以进行覆盖。
                     * 
                     */
                    void SetItems(const std::vector<Item>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * emr集群的英文id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改的配置列表。其中Key的取值与`DescribeGlobalConfig`接口的出参一一对应，不区分大小写（如果报错找不到Key，以出参为准），分别为：
1. 开启或关闭资源调度：enableResourceSchedule；在关闭时会有一个同步的选项，Key为sync，取值为true或false。
2. 调度器类型：scheduler。
2. 开启或关闭标签：enableLabel，取值为true或false。
2. 标签目录：labelDir。
3. 是否覆盖用户指定队列：queueMappingOverride，取值为true、false。
4. 程序上限：userMaxAppsDefault。
5. 动态配置项：`DescribeGlobalConfig`接口返回的DefaultSettings中的Name字段。
Value的取值都是字符串，对于**是否覆盖用户指定队列**、**程序上限**，json规范中的null表示清空该配置的值。支持修改单个配置项的值。对于**动态配置项**则需要全量传递以进行覆盖。
                     */
                    std::vector<Item> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYGLOBALCONFIGREQUEST_H_
