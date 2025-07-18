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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetFaceidRiskInfoToken返回参数结构体
                */
                class GetFaceidRiskInfoTokenResponse : public AbstractModel
                {
                public:
                    GetFaceidRiskInfoTokenResponse();
                    ~GetFaceidRiskInfoTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效期 10分钟。只能完成1次核身。
                     * @return FaceIdToken 有效期 10分钟。只能完成1次核身。
                     * 
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 判断参数 FaceIdToken 是否已赋值
                     * @return FaceIdToken 是否已赋值
                     * 
                     */
                    bool FaceIdTokenHasBeenSet() const;

                private:

                    /**
                     * 有效期 10分钟。只能完成1次核身。
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOTOKENRESPONSE_H_
