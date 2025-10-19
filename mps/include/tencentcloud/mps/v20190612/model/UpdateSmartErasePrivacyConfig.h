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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能擦除模板隐私保护配置
                */
                class UpdateSmartErasePrivacyConfig : public AbstractModel
                {
                public:
                    UpdateSmartErasePrivacyConfig();
                    ~UpdateSmartErasePrivacyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取隐私保护擦除方式。
- blur 模糊
- mosaic 马赛克
                     * @return PrivacyModel 隐私保护擦除方式。
- blur 模糊
- mosaic 马赛克
                     * 
                     */
                    std::string GetPrivacyModel() const;

                    /**
                     * 设置隐私保护擦除方式。
- blur 模糊
- mosaic 马赛克
                     * @param _privacyModel 隐私保护擦除方式。
- blur 模糊
- mosaic 马赛克
                     * 
                     */
                    void SetPrivacyModel(const std::string& _privacyModel);

                    /**
                     * 判断参数 PrivacyModel 是否已赋值
                     * @return PrivacyModel 是否已赋值
                     * 
                     */
                    bool PrivacyModelHasBeenSet() const;

                    /**
                     * 获取隐私保护目标，（在API Explorer上使用时无需传入数组，添加相应项并填入对应值即可）。
- face 人脸
- plate 车牌
                     * @return PrivacyTargets 隐私保护目标，（在API Explorer上使用时无需传入数组，添加相应项并填入对应值即可）。
- face 人脸
- plate 车牌
                     * 
                     */
                    std::vector<std::string> GetPrivacyTargets() const;

                    /**
                     * 设置隐私保护目标，（在API Explorer上使用时无需传入数组，添加相应项并填入对应值即可）。
- face 人脸
- plate 车牌
                     * @param _privacyTargets 隐私保护目标，（在API Explorer上使用时无需传入数组，添加相应项并填入对应值即可）。
- face 人脸
- plate 车牌
                     * 
                     */
                    void SetPrivacyTargets(const std::vector<std::string>& _privacyTargets);

                    /**
                     * 判断参数 PrivacyTargets 是否已赋值
                     * @return PrivacyTargets 是否已赋值
                     * 
                     */
                    bool PrivacyTargetsHasBeenSet() const;

                private:

                    /**
                     * 隐私保护擦除方式。
- blur 模糊
- mosaic 马赛克
                     */
                    std::string m_privacyModel;
                    bool m_privacyModelHasBeenSet;

                    /**
                     * 隐私保护目标，（在API Explorer上使用时无需传入数组，添加相应项并填入对应值即可）。
- face 人脸
- plate 车牌
                     */
                    std::vector<std::string> m_privacyTargets;
                    bool m_privacyTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_UPDATESMARTERASEPRIVACYCONFIG_H_
