/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteConfigTemplate请求参数结构体
                */
                class DeleteConfigTemplateRequest : public AbstractModel
                {
                public:
                    DeleteConfigTemplateRequest();
                    ~DeleteConfigTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return ConfigTemplateId 无
                     * 
                     */
                    std::string GetConfigTemplateId() const;

                    /**
                     * 设置无
                     * @param _configTemplateId 无
                     * 
                     */
                    void SetConfigTemplateId(const std::string& _configTemplateId);

                    /**
                     * 判断参数 ConfigTemplateId 是否已赋值
                     * @return ConfigTemplateId 是否已赋值
                     * 
                     */
                    bool ConfigTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_configTemplateId;
                    bool m_configTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETECONFIGTEMPLATEREQUEST_H_
