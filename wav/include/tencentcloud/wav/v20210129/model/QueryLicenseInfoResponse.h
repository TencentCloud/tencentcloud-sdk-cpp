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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFORESPONSE_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/LicenseInfo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryLicenseInfo返回参数结构体
                */
                class QueryLicenseInfoResponse : public AbstractModel
                {
                public:
                    QueryLicenseInfoResponse();
                    ~QueryLicenseInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取license响应信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseInfo license响应信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LicenseInfo GetLicenseInfo() const;

                    /**
                     * 判断参数 LicenseInfo 是否已赋值
                     * @return LicenseInfo 是否已赋值
                     * 
                     */
                    bool LicenseInfoHasBeenSet() const;

                private:

                    /**
                     * license响应信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LicenseInfo m_licenseInfo;
                    bool m_licenseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYLICENSEINFORESPONSE_H_
