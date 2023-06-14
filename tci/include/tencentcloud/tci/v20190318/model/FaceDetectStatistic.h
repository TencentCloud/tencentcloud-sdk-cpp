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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEDETECTSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEDETECTSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人脸监测统计信息
                */
                class FaceDetectStatistic : public AbstractModel
                {
                public:
                    FaceDetectStatistic();
                    ~FaceDetectStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸大小占画面平均占比
                     * @return FaceSizeRatio 人脸大小占画面平均占比
                     * 
                     */
                    double GetFaceSizeRatio() const;

                    /**
                     * 设置人脸大小占画面平均占比
                     * @param _faceSizeRatio 人脸大小占画面平均占比
                     * 
                     */
                    void SetFaceSizeRatio(const double& _faceSizeRatio);

                    /**
                     * 判断参数 FaceSizeRatio 是否已赋值
                     * @return FaceSizeRatio 是否已赋值
                     * 
                     */
                    bool FaceSizeRatioHasBeenSet() const;

                    /**
                     * 获取检测到正脸次数
                     * @return FrontalFaceCount 检测到正脸次数
                     * 
                     */
                    int64_t GetFrontalFaceCount() const;

                    /**
                     * 设置检测到正脸次数
                     * @param _frontalFaceCount 检测到正脸次数
                     * 
                     */
                    void SetFrontalFaceCount(const int64_t& _frontalFaceCount);

                    /**
                     * 判断参数 FrontalFaceCount 是否已赋值
                     * @return FrontalFaceCount 是否已赋值
                     * 
                     */
                    bool FrontalFaceCountHasBeenSet() const;

                    /**
                     * 获取正脸时长占比
                     * @return FrontalFaceRatio 正脸时长占比
                     * 
                     */
                    double GetFrontalFaceRatio() const;

                    /**
                     * 设置正脸时长占比
                     * @param _frontalFaceRatio 正脸时长占比
                     * 
                     */
                    void SetFrontalFaceRatio(const double& _frontalFaceRatio);

                    /**
                     * 判断参数 FrontalFaceRatio 是否已赋值
                     * @return FrontalFaceRatio 是否已赋值
                     * 
                     */
                    bool FrontalFaceRatioHasBeenSet() const;

                    /**
                     * 获取正脸时长在总出现时常占比
                     * @return FrontalFaceRealRatio 正脸时长在总出现时常占比
                     * 
                     */
                    double GetFrontalFaceRealRatio() const;

                    /**
                     * 设置正脸时长在总出现时常占比
                     * @param _frontalFaceRealRatio 正脸时长在总出现时常占比
                     * 
                     */
                    void SetFrontalFaceRealRatio(const double& _frontalFaceRealRatio);

                    /**
                     * 判断参数 FrontalFaceRealRatio 是否已赋值
                     * @return FrontalFaceRealRatio 是否已赋值
                     * 
                     */
                    bool FrontalFaceRealRatioHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识符
                     * @param _personId 人员唯一标识符
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取检测到侧脸次数
                     * @return SideFaceCount 检测到侧脸次数
                     * 
                     */
                    int64_t GetSideFaceCount() const;

                    /**
                     * 设置检测到侧脸次数
                     * @param _sideFaceCount 检测到侧脸次数
                     * 
                     */
                    void SetSideFaceCount(const int64_t& _sideFaceCount);

                    /**
                     * 判断参数 SideFaceCount 是否已赋值
                     * @return SideFaceCount 是否已赋值
                     * 
                     */
                    bool SideFaceCountHasBeenSet() const;

                    /**
                     * 获取侧脸时长占比
                     * @return SideFaceRatio 侧脸时长占比
                     * 
                     */
                    double GetSideFaceRatio() const;

                    /**
                     * 设置侧脸时长占比
                     * @param _sideFaceRatio 侧脸时长占比
                     * 
                     */
                    void SetSideFaceRatio(const double& _sideFaceRatio);

                    /**
                     * 判断参数 SideFaceRatio 是否已赋值
                     * @return SideFaceRatio 是否已赋值
                     * 
                     */
                    bool SideFaceRatioHasBeenSet() const;

                    /**
                     * 获取侧脸时长在总出现时常占比
                     * @return SideFaceRealRatio 侧脸时长在总出现时常占比
                     * 
                     */
                    double GetSideFaceRealRatio() const;

                    /**
                     * 设置侧脸时长在总出现时常占比
                     * @param _sideFaceRealRatio 侧脸时长在总出现时常占比
                     * 
                     */
                    void SetSideFaceRealRatio(const double& _sideFaceRealRatio);

                    /**
                     * 判断参数 SideFaceRealRatio 是否已赋值
                     * @return SideFaceRealRatio 是否已赋值
                     * 
                     */
                    bool SideFaceRealRatioHasBeenSet() const;

                private:

                    /**
                     * 人脸大小占画面平均占比
                     */
                    double m_faceSizeRatio;
                    bool m_faceSizeRatioHasBeenSet;

                    /**
                     * 检测到正脸次数
                     */
                    int64_t m_frontalFaceCount;
                    bool m_frontalFaceCountHasBeenSet;

                    /**
                     * 正脸时长占比
                     */
                    double m_frontalFaceRatio;
                    bool m_frontalFaceRatioHasBeenSet;

                    /**
                     * 正脸时长在总出现时常占比
                     */
                    double m_frontalFaceRealRatio;
                    bool m_frontalFaceRealRatioHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 检测到侧脸次数
                     */
                    int64_t m_sideFaceCount;
                    bool m_sideFaceCountHasBeenSet;

                    /**
                     * 侧脸时长占比
                     */
                    double m_sideFaceRatio;
                    bool m_sideFaceRatioHasBeenSet;

                    /**
                     * 侧脸时长在总出现时常占比
                     */
                    double m_sideFaceRealRatio;
                    bool m_sideFaceRealRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEDETECTSTATISTIC_H_
