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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateCloudProtectServiceOrderRecord返回参数结构体
                */
                class CreateCloudProtectServiceOrderRecordResponse : public AbstractModel
                {
                public:
                    CreateCloudProtectServiceOrderRecordResponse();
                    ~CreateCloudProtectServiceOrderRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功收货的资源ID
                     * @return Success 成功收货的资源ID
                     * 
                     */
                    std::vector<std::string> GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                private:

                    /**
                     * 成功收货的资源ID
                     */
                    std::vector<std::string> m_success;
                    bool m_successHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATECLOUDPROTECTSERVICEORDERRECORDRESPONSE_H_
