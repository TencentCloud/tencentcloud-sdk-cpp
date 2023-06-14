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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_CAMERAPERSONINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_CAMERAPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 摄像头抓图人物属性
                */
                class CameraPersonInfo : public AbstractModel
                {
                public:
                    CameraPersonInfo();
                    ~CameraPersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取临时id，还未生成face id时返回
                     * @return TempId 临时id，还未生成face id时返回
                     * 
                     */
                    std::string GetTempId() const;

                    /**
                     * 设置临时id，还未生成face id时返回
                     * @param _tempId 临时id，还未生成face id时返回
                     * 
                     */
                    void SetTempId(const std::string& _tempId);

                    /**
                     * 判断参数 TempId 是否已赋值
                     * @return TempId 是否已赋值
                     * 
                     */
                    bool TempIdHasBeenSet() const;

                    /**
                     * 获取人脸face id
                     * @return FaceId 人脸face id
                     * 
                     */
                    int64_t GetFaceId() const;

                    /**
                     * 设置人脸face id
                     * @param _faceId 人脸face id
                     * 
                     */
                    void SetFaceId(const int64_t& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取确定当次返回的哪个id有效，1-FaceId，2-TempId
                     * @return IdType 确定当次返回的哪个id有效，1-FaceId，2-TempId
                     * 
                     */
                    int64_t GetIdType() const;

                    /**
                     * 设置确定当次返回的哪个id有效，1-FaceId，2-TempId
                     * @param _idType 确定当次返回的哪个id有效，1-FaceId，2-TempId
                     * 
                     */
                    void SetIdType(const int64_t& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取当次抓拍到的人脸图片base编码
                     * @return FacePic 当次抓拍到的人脸图片base编码
                     * 
                     */
                    std::string GetFacePic() const;

                    /**
                     * 设置当次抓拍到的人脸图片base编码
                     * @param _facePic 当次抓拍到的人脸图片base编码
                     * 
                     */
                    void SetFacePic(const std::string& _facePic);

                    /**
                     * 判断参数 FacePic 是否已赋值
                     * @return FacePic 是否已赋值
                     * 
                     */
                    bool FacePicHasBeenSet() const;

                    /**
                     * 获取当次抓拍时间戳
                     * @return Time 当次抓拍时间戳
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置当次抓拍时间戳
                     * @param _time 当次抓拍时间戳
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取当前的person基本信息，图片以FacePic为准，结构体内未填
                     * @return PersonInfo 当前的person基本信息，图片以FacePic为准，结构体内未填
                     * 
                     */
                    PersonInfo GetPersonInfo() const;

                    /**
                     * 设置当前的person基本信息，图片以FacePic为准，结构体内未填
                     * @param _personInfo 当前的person基本信息，图片以FacePic为准，结构体内未填
                     * 
                     */
                    void SetPersonInfo(const PersonInfo& _personInfo);

                    /**
                     * 判断参数 PersonInfo 是否已赋值
                     * @return PersonInfo 是否已赋值
                     * 
                     */
                    bool PersonInfoHasBeenSet() const;

                private:

                    /**
                     * 临时id，还未生成face id时返回
                     */
                    std::string m_tempId;
                    bool m_tempIdHasBeenSet;

                    /**
                     * 人脸face id
                     */
                    int64_t m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 确定当次返回的哪个id有效，1-FaceId，2-TempId
                     */
                    int64_t m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 当次抓拍到的人脸图片base编码
                     */
                    std::string m_facePic;
                    bool m_facePicHasBeenSet;

                    /**
                     * 当次抓拍时间戳
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 当前的person基本信息，图片以FacePic为准，结构体内未填
                     */
                    PersonInfo m_personInfo;
                    bool m_personInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_CAMERAPERSONINFO_H_
