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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_FACEPROTECT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_FACEPROTECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 人脸保护参数
                */
                class FaceProtect : public AbstractModel
                {
                public:
                    FaceProtect();
                    ~FaceProtect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸区域增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @return FaceUsmRatio 人脸区域增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    double GetFaceUsmRatio() const;

                    /**
                     * 设置人脸区域增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * @param _faceUsmRatio 人脸区域增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     * 
                     */
                    void SetFaceUsmRatio(const double& _faceUsmRatio);

                    /**
                     * 判断参数 FaceUsmRatio 是否已赋值
                     * @return FaceUsmRatio 是否已赋值
                     * 
                     */
                    bool FaceUsmRatioHasBeenSet() const;

                private:

                    /**
                     * 人脸区域增强强度，可选项：0.0-1.0。小于0.0的默认为0.0，大于1.0的默认为1.0。
                     */
                    double m_faceUsmRatio;
                    bool m_faceUsmRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_FACEPROTECT_H_
