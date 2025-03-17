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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 签署控件的配置信息，用在嵌入式发起的页面配置，包括 

- 签署控件 是否默认展示日期.
                */
                class SignComponentConfig : public AbstractModel
                {
                public:
                    SignComponentConfig();
                    ~SignComponentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。

- false 展示签署日期（默认）
- true 不展示签署日期 
![image](https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png)。
                     * @return HideDate 签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。

- false 展示签署日期（默认）
- true 不展示签署日期 
![image](https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png)。
                     * 
                     */
                    bool GetHideDate() const;

                    /**
                     * 设置签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。

- false 展示签署日期（默认）
- true 不展示签署日期 
![image](https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png)。
                     * @param _hideDate 签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。

- false 展示签署日期（默认）
- true 不展示签署日期 
![image](https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png)。
                     * 
                     */
                    void SetHideDate(const bool& _hideDate);

                    /**
                     * 判断参数 HideDate 是否已赋值
                     * @return HideDate 是否已赋值
                     * 
                     */
                    bool HideDateHasBeenSet() const;

                private:

                    /**
                     * 签署控件默认属性配置，是否默认展示签署日期， 在页面中可以进行修改。

- false 展示签署日期（默认）
- true 不展示签署日期 
![image](https://qcloudimg.tencent-cloud.cn/raw/448514412e2f69f6129425beda4ff568.png)。
                     */
                    bool m_hideDate;
                    bool m_hideDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNCOMPONENTCONFIG_H_
