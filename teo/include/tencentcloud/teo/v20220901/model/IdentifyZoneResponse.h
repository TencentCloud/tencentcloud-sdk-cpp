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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AscriptionInfo.h>
#include <tencentcloud/teo/v20220901/model/FileAscriptionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IdentifyZone返回参数结构体
                */
                class IdentifyZoneResponse : public AbstractModel
                {
                public:
                    IdentifyZoneResponse();
                    ~IdentifyZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点归属校验：Dns校验信息。
                     * @return Ascription 站点归属校验：Dns校验信息。
                     * 
                     */
                    AscriptionInfo GetAscription() const;

                    /**
                     * 判断参数 Ascription 是否已赋值
                     * @return Ascription 是否已赋值
                     * 
                     */
                    bool AscriptionHasBeenSet() const;

                    /**
                     * 获取站点归属权校验：文件校验信息。
                     * @return FileAscription 站点归属权校验：文件校验信息。
                     * 
                     */
                    FileAscriptionInfo GetFileAscription() const;

                    /**
                     * 判断参数 FileAscription 是否已赋值
                     * @return FileAscription 是否已赋值
                     * 
                     */
                    bool FileAscriptionHasBeenSet() const;

                private:

                    /**
                     * 站点归属校验：Dns校验信息。
                     */
                    AscriptionInfo m_ascription;
                    bool m_ascriptionHasBeenSet;

                    /**
                     * 站点归属权校验：文件校验信息。
                     */
                    FileAscriptionInfo m_fileAscription;
                    bool m_fileAscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONERESPONSE_H_
