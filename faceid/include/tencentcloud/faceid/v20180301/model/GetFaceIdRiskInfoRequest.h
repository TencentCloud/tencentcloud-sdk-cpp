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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOREQUEST_H_

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
                * GetFaceIdRiskInfo请求参数结构体
                */
                class GetFaceIdRiskInfoRequest : public AbstractModel
                {
                public:
                    GetFaceIdRiskInfoRequest();
                    ~GetFaceIdRiskInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK人脸核身流程的标识，调用[GetFaceidRiskInfoToken](https://cloud.tencent.com/document/product/1007/104581)接口时生成。
                     * @return FaceIdToken SDK人脸核身流程的标识，调用[GetFaceidRiskInfoToken](https://cloud.tencent.com/document/product/1007/104581)接口时生成。
                     * 
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 设置SDK人脸核身流程的标识，调用[GetFaceidRiskInfoToken](https://cloud.tencent.com/document/product/1007/104581)接口时生成。
                     * @param _faceIdToken SDK人脸核身流程的标识，调用[GetFaceidRiskInfoToken](https://cloud.tencent.com/document/product/1007/104581)接口时生成。
                     * 
                     */
                    void SetFaceIdToken(const std::string& _faceIdToken);

                    /**
                     * 判断参数 FaceIdToken 是否已赋值
                     * @return FaceIdToken 是否已赋值
                     * 
                     */
                    bool FaceIdTokenHasBeenSet() const;

                private:

                    /**
                     * SDK人脸核身流程的标识，调用[GetFaceidRiskInfoToken](https://cloud.tencent.com/document/product/1007/104581)接口时生成。
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRISKINFOREQUEST_H_
