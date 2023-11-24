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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONDETAILRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeConfigGroupVersionDetail返回参数结构体
                */
                class DescribeConfigGroupVersionDetailResponse : public AbstractModel
                {
                public:
                    DescribeConfigGroupVersionDetailResponse();
                    ~DescribeConfigGroupVersionDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取版本信息。
                     * @return ConfigGroupVersionInfo 版本信息。
                     * 
                     */
                    ConfigGroupVersionInfo GetConfigGroupVersionInfo() const;

                    /**
                     * 判断参数 ConfigGroupVersionInfo 是否已赋值
                     * @return ConfigGroupVersionInfo 是否已赋值
                     * 
                     */
                    bool ConfigGroupVersionInfoHasBeenSet() const;

                    /**
                     * 获取版本文件的内容。以 JSON 格式返回。
                     * @return Content 版本文件的内容。以 JSON 格式返回。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 版本信息。
                     */
                    ConfigGroupVersionInfo m_configGroupVersionInfo;
                    bool m_configGroupVersionInfoHasBeenSet;

                    /**
                     * 版本文件的内容。以 JSON 格式返回。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONDETAILRESPONSE_H_
