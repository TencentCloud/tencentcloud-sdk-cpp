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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONVISITINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONVISITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/SceneInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 用户到访明细
                */
                class PersonVisitInfo : public AbstractModel
                {
                public:
                    PersonVisitInfo();
                    ~PersonVisitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return PersonId 用户ID
                     * 
                     */
                    uint64_t GetPersonId() const;

                    /**
                     * 设置用户ID
                     * @param _personId 用户ID
                     * 
                     */
                    void SetPersonId(const uint64_t& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取用户到访ID
                     * @return VisitId 用户到访ID
                     * 
                     */
                    uint64_t GetVisitId() const;

                    /**
                     * 设置用户到访ID
                     * @param _visitId 用户到访ID
                     * 
                     */
                    void SetVisitId(const uint64_t& _visitId);

                    /**
                     * 判断参数 VisitId 是否已赋值
                     * @return VisitId 是否已赋值
                     * 
                     */
                    bool VisitIdHasBeenSet() const;

                    /**
                     * 获取到访时间：Unix时间戳
                     * @return InTime 到访时间：Unix时间戳
                     * 
                     */
                    uint64_t GetInTime() const;

                    /**
                     * 设置到访时间：Unix时间戳
                     * @param _inTime 到访时间：Unix时间戳
                     * 
                     */
                    void SetInTime(const uint64_t& _inTime);

                    /**
                     * 判断参数 InTime 是否已赋值
                     * @return InTime 是否已赋值
                     * 
                     */
                    bool InTimeHasBeenSet() const;

                    /**
                     * 获取抓拍到的头像Base64内容，已弃用，返回默认空值
                     * @return CapturedPicture 抓拍到的头像Base64内容，已弃用，返回默认空值
                     * 
                     */
                    std::string GetCapturedPicture() const;

                    /**
                     * 设置抓拍到的头像Base64内容，已弃用，返回默认空值
                     * @param _capturedPicture 抓拍到的头像Base64内容，已弃用，返回默认空值
                     * 
                     */
                    void SetCapturedPicture(const std::string& _capturedPicture);

                    /**
                     * 判断参数 CapturedPicture 是否已赋值
                     * @return CapturedPicture 是否已赋值
                     * 
                     */
                    bool CapturedPictureHasBeenSet() const;

                    /**
                     * 获取口罩类型：0不戴口罩，1戴口罩
                     * @return MaskType 口罩类型：0不戴口罩，1戴口罩
                     * 
                     */
                    uint64_t GetMaskType() const;

                    /**
                     * 设置口罩类型：0不戴口罩，1戴口罩
                     * @param _maskType 口罩类型：0不戴口罩，1戴口罩
                     * 
                     */
                    void SetMaskType(const uint64_t& _maskType);

                    /**
                     * 判断参数 MaskType 是否已赋值
                     * @return MaskType 是否已赋值
                     * 
                     */
                    bool MaskTypeHasBeenSet() const;

                    /**
                     * 获取眼镜类型：0不戴眼镜，1普通眼镜 , 2墨镜
                     * @return GlassType 眼镜类型：0不戴眼镜，1普通眼镜 , 2墨镜
                     * 
                     */
                    uint64_t GetGlassType() const;

                    /**
                     * 设置眼镜类型：0不戴眼镜，1普通眼镜 , 2墨镜
                     * @param _glassType 眼镜类型：0不戴眼镜，1普通眼镜 , 2墨镜
                     * 
                     */
                    void SetGlassType(const uint64_t& _glassType);

                    /**
                     * 判断参数 GlassType 是否已赋值
                     * @return GlassType 是否已赋值
                     * 
                     */
                    bool GlassTypeHasBeenSet() const;

                    /**
                     * 获取发型：0 短发,  1长发
                     * @return HairType 发型：0 短发,  1长发
                     * 
                     */
                    uint64_t GetHairType() const;

                    /**
                     * 设置发型：0 短发,  1长发
                     * @param _hairType 发型：0 短发,  1长发
                     * 
                     */
                    void SetHairType(const uint64_t& _hairType);

                    /**
                     * 判断参数 HairType 是否已赋值
                     * @return HairType 是否已赋值
                     * 
                     */
                    bool HairTypeHasBeenSet() const;

                    /**
                     * 获取抓拍到的头像Url，在有效期内可以访问下载
                     * @return CapturedPictureUrl 抓拍到的头像Url，在有效期内可以访问下载
                     * 
                     */
                    std::string GetCapturedPictureUrl() const;

                    /**
                     * 设置抓拍到的头像Url，在有效期内可以访问下载
                     * @param _capturedPictureUrl 抓拍到的头像Url，在有效期内可以访问下载
                     * 
                     */
                    void SetCapturedPictureUrl(const std::string& _capturedPictureUrl);

                    /**
                     * 判断参数 CapturedPictureUrl 是否已赋值
                     * @return CapturedPictureUrl 是否已赋值
                     * 
                     */
                    bool CapturedPictureUrlHasBeenSet() const;

                    /**
                     * 获取抓拍头像的场景图信息
                     * @return SceneInfo 抓拍头像的场景图信息
                     * 
                     */
                    SceneInfo GetSceneInfo() const;

                    /**
                     * 设置抓拍头像的场景图信息
                     * @param _sceneInfo 抓拍头像的场景图信息
                     * 
                     */
                    void SetSceneInfo(const SceneInfo& _sceneInfo);

                    /**
                     * 判断参数 SceneInfo 是否已赋值
                     * @return SceneInfo 是否已赋值
                     * 
                     */
                    bool SceneInfoHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    uint64_t m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 用户到访ID
                     */
                    uint64_t m_visitId;
                    bool m_visitIdHasBeenSet;

                    /**
                     * 到访时间：Unix时间戳
                     */
                    uint64_t m_inTime;
                    bool m_inTimeHasBeenSet;

                    /**
                     * 抓拍到的头像Base64内容，已弃用，返回默认空值
                     */
                    std::string m_capturedPicture;
                    bool m_capturedPictureHasBeenSet;

                    /**
                     * 口罩类型：0不戴口罩，1戴口罩
                     */
                    uint64_t m_maskType;
                    bool m_maskTypeHasBeenSet;

                    /**
                     * 眼镜类型：0不戴眼镜，1普通眼镜 , 2墨镜
                     */
                    uint64_t m_glassType;
                    bool m_glassTypeHasBeenSet;

                    /**
                     * 发型：0 短发,  1长发
                     */
                    uint64_t m_hairType;
                    bool m_hairTypeHasBeenSet;

                    /**
                     * 抓拍到的头像Url，在有效期内可以访问下载
                     */
                    std::string m_capturedPictureUrl;
                    bool m_capturedPictureUrlHasBeenSet;

                    /**
                     * 抓拍头像的场景图信息
                     */
                    SceneInfo m_sceneInfo;
                    bool m_sceneInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONVISITINFO_H_
