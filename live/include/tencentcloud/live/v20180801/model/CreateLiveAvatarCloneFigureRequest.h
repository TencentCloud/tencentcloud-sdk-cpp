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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGUREREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveAvatarCloneFigure请求参数结构体
                */
                class CreateLiveAvatarCloneFigureRequest : public AbstractModel
                {
                public:
                    CreateLiveAvatarCloneFigureRequest();
                    ~CreateLiveAvatarCloneFigureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>形象克隆场景类型</p><p>枚举值：</p><ul><li>PHOTO： 图生数字人</li><li>GREEN_SCREEN： 绿幕数字人</li><li>REAL_SHOT： 实景数字人</li></ul>
                     * @return SceneType <p>形象克隆场景类型</p><p>枚举值：</p><ul><li>PHOTO： 图生数字人</li><li>GREEN_SCREEN： 绿幕数字人</li><li>REAL_SHOT： 实景数字人</li></ul>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>形象克隆场景类型</p><p>枚举值：</p><ul><li>PHOTO： 图生数字人</li><li>GREEN_SCREEN： 绿幕数字人</li><li>REAL_SHOT： 实景数字人</li></ul>
                     * @param _sceneType <p>形象克隆场景类型</p><p>枚举值：</p><ul><li>PHOTO： 图生数字人</li><li>GREEN_SCREEN： 绿幕数字人</li><li>REAL_SHOT： 实景数字人</li></ul>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>克隆的形象的名字</p>
                     * @return FigureName <p>克隆的形象的名字</p>
                     * 
                     */
                    std::string GetFigureName() const;

                    /**
                     * 设置<p>克隆的形象的名字</p>
                     * @param _figureName <p>克隆的形象的名字</p>
                     * 
                     */
                    void SetFigureName(const std::string& _figureName);

                    /**
                     * 判断参数 FigureName 是否已赋值
                     * @return FigureName 是否已赋值
                     * 
                     */
                    bool FigureNameHasBeenSet() const;

                    /**
                     * 获取<p>克隆的形象的url</p>
                     * @return MaterialUrl <p>克隆的形象的url</p>
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置<p>克隆的形象的url</p>
                     * @param _materialUrl <p>克隆的形象的url</p>
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取<p>克隆的形象的性别</p><p>枚举值：</p><ul><li>MALE： 男</li><li>FEMALE： 女</li><li>UNHNOWN： 不知道</li></ul>
                     * @return Gender <p>克隆的形象的性别</p><p>枚举值：</p><ul><li>MALE： 男</li><li>FEMALE： 女</li><li>UNHNOWN： 不知道</li></ul>
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置<p>克隆的形象的性别</p><p>枚举值：</p><ul><li>MALE： 男</li><li>FEMALE： 女</li><li>UNHNOWN： 不知道</li></ul>
                     * @param _gender <p>克隆的形象的性别</p><p>枚举值：</p><ul><li>MALE： 男</li><li>FEMALE： 女</li><li>UNHNOWN： 不知道</li></ul>
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取<p>授权pdf</p>
                     * @return IdentityWrittenUrl <p>授权pdf</p>
                     * 
                     */
                    std::string GetIdentityWrittenUrl() const;

                    /**
                     * 设置<p>授权pdf</p>
                     * @param _identityWrittenUrl <p>授权pdf</p>
                     * 
                     */
                    void SetIdentityWrittenUrl(const std::string& _identityWrittenUrl);

                    /**
                     * 判断参数 IdentityWrittenUrl 是否已赋值
                     * @return IdentityWrittenUrl 是否已赋值
                     * 
                     */
                    bool IdentityWrittenUrlHasBeenSet() const;

                    /**
                     * 获取<p>授权视频</p>
                     * @return IdentityVideoUrl <p>授权视频</p>
                     * 
                     */
                    std::string GetIdentityVideoUrl() const;

                    /**
                     * 设置<p>授权视频</p>
                     * @param _identityVideoUrl <p>授权视频</p>
                     * 
                     */
                    void SetIdentityVideoUrl(const std::string& _identityVideoUrl);

                    /**
                     * 判断参数 IdentityVideoUrl 是否已赋值
                     * @return IdentityVideoUrl 是否已赋值
                     * 
                     */
                    bool IdentityVideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>图生视频时，动作训练幅度大小</p><p>枚举值：</p><ul><li>0： 只有头部轻微动</li><li>1： 头部跟身体均动</li></ul>
                     * @return PhotoVersion <p>图生视频时，动作训练幅度大小</p><p>枚举值：</p><ul><li>0： 只有头部轻微动</li><li>1： 头部跟身体均动</li></ul>
                     * 
                     */
                    uint64_t GetPhotoVersion() const;

                    /**
                     * 设置<p>图生视频时，动作训练幅度大小</p><p>枚举值：</p><ul><li>0： 只有头部轻微动</li><li>1： 头部跟身体均动</li></ul>
                     * @param _photoVersion <p>图生视频时，动作训练幅度大小</p><p>枚举值：</p><ul><li>0： 只有头部轻微动</li><li>1： 头部跟身体均动</li></ul>
                     * 
                     */
                    void SetPhotoVersion(const uint64_t& _photoVersion);

                    /**
                     * 判断参数 PhotoVersion 是否已赋值
                     * @return PhotoVersion 是否已赋值
                     * 
                     */
                    bool PhotoVersionHasBeenSet() const;

                private:

                    /**
                     * <p>形象克隆场景类型</p><p>枚举值：</p><ul><li>PHOTO： 图生数字人</li><li>GREEN_SCREEN： 绿幕数字人</li><li>REAL_SHOT： 实景数字人</li></ul>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>克隆的形象的名字</p>
                     */
                    std::string m_figureName;
                    bool m_figureNameHasBeenSet;

                    /**
                     * <p>克隆的形象的url</p>
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * <p>克隆的形象的性别</p><p>枚举值：</p><ul><li>MALE： 男</li><li>FEMALE： 女</li><li>UNHNOWN： 不知道</li></ul>
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * <p>授权pdf</p>
                     */
                    std::string m_identityWrittenUrl;
                    bool m_identityWrittenUrlHasBeenSet;

                    /**
                     * <p>授权视频</p>
                     */
                    std::string m_identityVideoUrl;
                    bool m_identityVideoUrlHasBeenSet;

                    /**
                     * <p>图生视频时，动作训练幅度大小</p><p>枚举值：</p><ul><li>0： 只有头部轻微动</li><li>1： 头部跟身体均动</li></ul>
                     */
                    uint64_t m_photoVersion;
                    bool m_photoVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVEAVATARCLONEFIGUREREQUEST_H_
