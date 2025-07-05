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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACERESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/FaceInfo.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DeleteFace返回参数结构体
                */
                class DeleteFaceResponse : public AbstractModel
                {
                public:
                    DeleteFaceResponse();
                    ~DeleteFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸操作结果
                     * @return FaceInfoSet 人脸操作结果
                     * 
                     */
                    std::vector<FaceInfo> GetFaceInfoSet() const;

                    /**
                     * 判断参数 FaceInfoSet 是否已赋值
                     * @return FaceInfoSet 是否已赋值
                     * 
                     */
                    bool FaceInfoSetHasBeenSet() const;

                private:

                    /**
                     * 人脸操作结果
                     */
                    std::vector<FaceInfo> m_faceInfoSet;
                    bool m_faceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DELETEFACERESPONSE_H_
