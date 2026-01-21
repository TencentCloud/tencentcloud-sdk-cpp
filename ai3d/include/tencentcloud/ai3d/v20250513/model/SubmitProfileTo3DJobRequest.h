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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITPROFILETO3DJOBREQUEST_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITPROFILETO3DJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/Image.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * SubmitProfileTo3DJob请求参数结构体
                */
                class SubmitProfileTo3DJobRequest : public AbstractModel
                {
                public:
                    SubmitProfileTo3DJobRequest();
                    ~SubmitProfileTo3DJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取真人头像参考图 Base64 数据和参考图 Url。
- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 图片限制：单边分辨率小于4096且大于500，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。
                     * @return Profile 真人头像参考图 Base64 数据和参考图 Url。
- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 图片限制：单边分辨率小于4096且大于500，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。
                     * 
                     */
                    Image GetProfile() const;

                    /**
                     * 设置真人头像参考图 Base64 数据和参考图 Url。
- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 图片限制：单边分辨率小于4096且大于500，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。
                     * @param _profile 真人头像参考图 Base64 数据和参考图 Url。
- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 图片限制：单边分辨率小于4096且大于500，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。
                     * 
                     */
                    void SetProfile(const Image& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取生成人物模板，参考值：

basketball: 动感球手；

badminton: 羽扬中华；

pingpong: 国球荣耀；

gymnastics:勇攀巅峰；

pilidance: 舞动青春；

tennis: 网球甜心；

athletics: 东方疾风；

footballboykicking1:激情逐风；

footballboykicking2: 绿茵之星；

guitar:甜酷弦音；

footballboy: 足球小将；

skateboard: 滑跃青春；

futuresoilder: 未来战士；

explorer: 逐梦旷野；

beardollgirl:可爱女孩；

bibpantsboy:都市白领；

womansitpose: 职业丽影；

womanstandpose2: 悠闲时光；

mysteriousprincess: 海洋公主；

manstandpose2: 演讲之星；
                     * @return Template 生成人物模板，参考值：

basketball: 动感球手；

badminton: 羽扬中华；

pingpong: 国球荣耀；

gymnastics:勇攀巅峰；

pilidance: 舞动青春；

tennis: 网球甜心；

athletics: 东方疾风；

footballboykicking1:激情逐风；

footballboykicking2: 绿茵之星；

guitar:甜酷弦音；

footballboy: 足球小将；

skateboard: 滑跃青春；

futuresoilder: 未来战士；

explorer: 逐梦旷野；

beardollgirl:可爱女孩；

bibpantsboy:都市白领；

womansitpose: 职业丽影；

womanstandpose2: 悠闲时光；

mysteriousprincess: 海洋公主；

manstandpose2: 演讲之星；
                     * 
                     */
                    std::string GetTemplate() const;

                    /**
                     * 设置生成人物模板，参考值：

basketball: 动感球手；

badminton: 羽扬中华；

pingpong: 国球荣耀；

gymnastics:勇攀巅峰；

pilidance: 舞动青春；

tennis: 网球甜心；

athletics: 东方疾风；

footballboykicking1:激情逐风；

footballboykicking2: 绿茵之星；

guitar:甜酷弦音；

footballboy: 足球小将；

skateboard: 滑跃青春；

futuresoilder: 未来战士；

explorer: 逐梦旷野；

beardollgirl:可爱女孩；

bibpantsboy:都市白领；

womansitpose: 职业丽影；

womanstandpose2: 悠闲时光；

mysteriousprincess: 海洋公主；

manstandpose2: 演讲之星；
                     * @param _template 生成人物模板，参考值：

basketball: 动感球手；

badminton: 羽扬中华；

pingpong: 国球荣耀；

gymnastics:勇攀巅峰；

pilidance: 舞动青春；

tennis: 网球甜心；

athletics: 东方疾风；

footballboykicking1:激情逐风；

footballboykicking2: 绿茵之星；

guitar:甜酷弦音；

footballboy: 足球小将；

skateboard: 滑跃青春；

futuresoilder: 未来战士；

explorer: 逐梦旷野；

beardollgirl:可爱女孩；

bibpantsboy:都市白领；

womansitpose: 职业丽影；

womanstandpose2: 悠闲时光；

mysteriousprincess: 海洋公主；

manstandpose2: 演讲之星；
                     * 
                     */
                    void SetTemplate(const std::string& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                private:

                    /**
                     * 真人头像参考图 Base64 数据和参考图 Url。
- Base64 和 Url 必须提供一个，如果都提供以 Url 为准。
- 图片限制：单边分辨率小于4096且大于500，转成 Base64 字符串后小于 10MB，格式支持 jpg、jpeg、png。
                     */
                    Image m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * 生成人物模板，参考值：

basketball: 动感球手；

badminton: 羽扬中华；

pingpong: 国球荣耀；

gymnastics:勇攀巅峰；

pilidance: 舞动青春；

tennis: 网球甜心；

athletics: 东方疾风；

footballboykicking1:激情逐风；

footballboykicking2: 绿茵之星；

guitar:甜酷弦音；

footballboy: 足球小将；

skateboard: 滑跃青春；

futuresoilder: 未来战士；

explorer: 逐梦旷野；

beardollgirl:可爱女孩；

bibpantsboy:都市白领；

womansitpose: 职业丽影；

womanstandpose2: 悠闲时光；

mysteriousprincess: 海洋公主；

manstandpose2: 演讲之星；
                     */
                    std::string m_template;
                    bool m_templateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_SUBMITPROFILETO3DJOBREQUEST_H_
