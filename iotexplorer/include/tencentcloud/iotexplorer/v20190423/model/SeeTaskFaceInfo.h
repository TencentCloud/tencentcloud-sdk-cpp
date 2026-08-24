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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKFACEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKFACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 任务人脸元数据
                */
                class SeeTaskFaceInfo : public AbstractModel
                {
                public:
                    SeeTaskFaceInfo();
                    ~SeeTaskFaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸裁剪图下载 URL，仅在请求 FileURLExpireTime 时返回
                     * @return CropImageURL 人脸裁剪图下载 URL，仅在请求 FileURLExpireTime 时返回
                     * 
                     */
                    std::string GetCropImageURL() const;

                    /**
                     * 设置人脸裁剪图下载 URL，仅在请求 FileURLExpireTime 时返回
                     * @param _cropImageURL 人脸裁剪图下载 URL，仅在请求 FileURLExpireTime 时返回
                     * 
                     */
                    void SetCropImageURL(const std::string& _cropImageURL);

                    /**
                     * 判断参数 CropImageURL 是否已赋值
                     * @return CropImageURL 是否已赋值
                     * 
                     */
                    bool CropImageURLHasBeenSet() const;

                    /**
                     * 获取人脸 ID
                     * @return FaceId 人脸 ID
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置人脸 ID
                     * @param _faceId 人脸 ID
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取人员 ID
                     * @return PersonId 人员 ID
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员 ID
                     * @param _personId 人员 ID
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
                     * 获取人脸所在画面的毫秒级 UNIX 时间戳
                     * @return TimestampMs 人脸所在画面的毫秒级 UNIX 时间戳
                     * 
                     */
                    int64_t GetTimestampMs() const;

                    /**
                     * 设置人脸所在画面的毫秒级 UNIX 时间戳
                     * @param _timestampMs 人脸所在画面的毫秒级 UNIX 时间戳
                     * 
                     */
                    void SetTimestampMs(const int64_t& _timestampMs);

                    /**
                     * 判断参数 TimestampMs 是否已赋值
                     * @return TimestampMs 是否已赋值
                     * 
                     */
                    bool TimestampMsHasBeenSet() const;

                private:

                    /**
                     * 人脸裁剪图下载 URL，仅在请求 FileURLExpireTime 时返回
                     */
                    std::string m_cropImageURL;
                    bool m_cropImageURLHasBeenSet;

                    /**
                     * 人脸 ID
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 人员 ID
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人脸所在画面的毫秒级 UNIX 时间戳
                     */
                    int64_t m_timestampMs;
                    bool m_timestampMsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEETASKFACEINFO_H_
