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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFOREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryLicenseInfo请求参数结构体
                */
                class QueryLicenseInfoRequest : public AbstractModel
                {
                public:
                    QueryLicenseInfoRequest();
                    ~QueryLicenseInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取license编号
                     * @return License license编号
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置license编号
                     * @param _license license编号
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                private:

                    /**
                     * license编号
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFOREQUEST_H_
