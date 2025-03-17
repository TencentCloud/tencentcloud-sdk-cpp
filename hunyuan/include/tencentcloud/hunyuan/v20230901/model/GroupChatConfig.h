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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCONFIG_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Character.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 群聊配置
                */
                class GroupChatConfig : public AbstractModel
                {
                public:
                    GroupChatConfig();
                    ~GroupChatConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物名称
                     * @return UserName 人物名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置人物名称
                     * @param _userName 人物名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取### 主题：\n武道修炼与科技创新的碰撞\n\n### 地点：\n布尔玛的实验室\n\n### 故事背景：\n布尔玛正在研发一种新型的龙珠雷达，旨在更精确地定位龙珠的位置。她邀请了孙悟空、天津饭、饺子和雅木茶前来测试新设备。然而，这些武道家们对科技的理解有限，导致了一系列有趣的误解和互动。\n\n### 人物关系：\n- **布尔玛**：天才科学家，负责研发和解释新设备。\n- **孙悟空**：纯粹的战斗狂，对科技一窍不通，但对新事物充满好奇。\n- **天津饭**：严肃自律的武道家，对科技持谨慎态度，但愿意尝试。\n- **饺子**：内向单纯，依赖天津饭，对科技感到困惑和害怕。\n- **雅木茶**：幽默自嘲的前沙漠强盗，对科技有一定了解，但更倾向于轻松调侃。\n\n### 人物目标：\n- **布尔玛**：希望新龙珠雷达能够得到有效测试，并得到反馈以改进。\n- **孙悟空**：希望通过新设备找到更强的对手进行战斗。\n- **天津饭**：希望通过测试新设备提升自己的武道修炼。\n- **饺子**：希望在不引起麻烦的情况下完成任务，并得到天津饭的认可。\n- **雅木茶**：希望通过参与测试证明自己的价值，同时享受与朋友们的互动。\n\n### 场景描述：\n布尔玛在实验室中展示她的新龙珠雷达，解释其工作原理和优势。孙悟空对设备的功能感到兴奋，但完全无法理解技术细节，不断提出天真的问题。天津饭则严肃地询问设备的安全性和可靠性，表现出对科技的谨慎态度。饺子对复杂的设备感到害怕，不断向天津饭寻求确认和安慰。雅木茶则在一旁调侃大家的反应，试图缓解紧张气氛。布尔玛在解释过程中不断被孙悟空的问题打断，感到无奈，但也被他的热情所感染。最终，大家决定一起外出测试新设备，展开一场充满欢笑和冒险的旅程。
                     * @return Description ### 主题：\n武道修炼与科技创新的碰撞\n\n### 地点：\n布尔玛的实验室\n\n### 故事背景：\n布尔玛正在研发一种新型的龙珠雷达，旨在更精确地定位龙珠的位置。她邀请了孙悟空、天津饭、饺子和雅木茶前来测试新设备。然而，这些武道家们对科技的理解有限，导致了一系列有趣的误解和互动。\n\n### 人物关系：\n- **布尔玛**：天才科学家，负责研发和解释新设备。\n- **孙悟空**：纯粹的战斗狂，对科技一窍不通，但对新事物充满好奇。\n- **天津饭**：严肃自律的武道家，对科技持谨慎态度，但愿意尝试。\n- **饺子**：内向单纯，依赖天津饭，对科技感到困惑和害怕。\n- **雅木茶**：幽默自嘲的前沙漠强盗，对科技有一定了解，但更倾向于轻松调侃。\n\n### 人物目标：\n- **布尔玛**：希望新龙珠雷达能够得到有效测试，并得到反馈以改进。\n- **孙悟空**：希望通过新设备找到更强的对手进行战斗。\n- **天津饭**：希望通过测试新设备提升自己的武道修炼。\n- **饺子**：希望在不引起麻烦的情况下完成任务，并得到天津饭的认可。\n- **雅木茶**：希望通过参与测试证明自己的价值，同时享受与朋友们的互动。\n\n### 场景描述：\n布尔玛在实验室中展示她的新龙珠雷达，解释其工作原理和优势。孙悟空对设备的功能感到兴奋，但完全无法理解技术细节，不断提出天真的问题。天津饭则严肃地询问设备的安全性和可靠性，表现出对科技的谨慎态度。饺子对复杂的设备感到害怕，不断向天津饭寻求确认和安慰。雅木茶则在一旁调侃大家的反应，试图缓解紧张气氛。布尔玛在解释过程中不断被孙悟空的问题打断，感到无奈，但也被他的热情所感染。最终，大家决定一起外出测试新设备，展开一场充满欢笑和冒险的旅程。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置### 主题：\n武道修炼与科技创新的碰撞\n\n### 地点：\n布尔玛的实验室\n\n### 故事背景：\n布尔玛正在研发一种新型的龙珠雷达，旨在更精确地定位龙珠的位置。她邀请了孙悟空、天津饭、饺子和雅木茶前来测试新设备。然而，这些武道家们对科技的理解有限，导致了一系列有趣的误解和互动。\n\n### 人物关系：\n- **布尔玛**：天才科学家，负责研发和解释新设备。\n- **孙悟空**：纯粹的战斗狂，对科技一窍不通，但对新事物充满好奇。\n- **天津饭**：严肃自律的武道家，对科技持谨慎态度，但愿意尝试。\n- **饺子**：内向单纯，依赖天津饭，对科技感到困惑和害怕。\n- **雅木茶**：幽默自嘲的前沙漠强盗，对科技有一定了解，但更倾向于轻松调侃。\n\n### 人物目标：\n- **布尔玛**：希望新龙珠雷达能够得到有效测试，并得到反馈以改进。\n- **孙悟空**：希望通过新设备找到更强的对手进行战斗。\n- **天津饭**：希望通过测试新设备提升自己的武道修炼。\n- **饺子**：希望在不引起麻烦的情况下完成任务，并得到天津饭的认可。\n- **雅木茶**：希望通过参与测试证明自己的价值，同时享受与朋友们的互动。\n\n### 场景描述：\n布尔玛在实验室中展示她的新龙珠雷达，解释其工作原理和优势。孙悟空对设备的功能感到兴奋，但完全无法理解技术细节，不断提出天真的问题。天津饭则严肃地询问设备的安全性和可靠性，表现出对科技的谨慎态度。饺子对复杂的设备感到害怕，不断向天津饭寻求确认和安慰。雅木茶则在一旁调侃大家的反应，试图缓解紧张气氛。布尔玛在解释过程中不断被孙悟空的问题打断，感到无奈，但也被他的热情所感染。最终，大家决定一起外出测试新设备，展开一场充满欢笑和冒险的旅程。
                     * @param _description ### 主题：\n武道修炼与科技创新的碰撞\n\n### 地点：\n布尔玛的实验室\n\n### 故事背景：\n布尔玛正在研发一种新型的龙珠雷达，旨在更精确地定位龙珠的位置。她邀请了孙悟空、天津饭、饺子和雅木茶前来测试新设备。然而，这些武道家们对科技的理解有限，导致了一系列有趣的误解和互动。\n\n### 人物关系：\n- **布尔玛**：天才科学家，负责研发和解释新设备。\n- **孙悟空**：纯粹的战斗狂，对科技一窍不通，但对新事物充满好奇。\n- **天津饭**：严肃自律的武道家，对科技持谨慎态度，但愿意尝试。\n- **饺子**：内向单纯，依赖天津饭，对科技感到困惑和害怕。\n- **雅木茶**：幽默自嘲的前沙漠强盗，对科技有一定了解，但更倾向于轻松调侃。\n\n### 人物目标：\n- **布尔玛**：希望新龙珠雷达能够得到有效测试，并得到反馈以改进。\n- **孙悟空**：希望通过新设备找到更强的对手进行战斗。\n- **天津饭**：希望通过测试新设备提升自己的武道修炼。\n- **饺子**：希望在不引起麻烦的情况下完成任务，并得到天津饭的认可。\n- **雅木茶**：希望通过参与测试证明自己的价值，同时享受与朋友们的互动。\n\n### 场景描述：\n布尔玛在实验室中展示她的新龙珠雷达，解释其工作原理和优势。孙悟空对设备的功能感到兴奋，但完全无法理解技术细节，不断提出天真的问题。天津饭则严肃地询问设备的安全性和可靠性，表现出对科技的谨慎态度。饺子对复杂的设备感到害怕，不断向天津饭寻求确认和安慰。雅木茶则在一旁调侃大家的反应，试图缓解紧张气氛。布尔玛在解释过程中不断被孙悟空的问题打断，感到无奈，但也被他的热情所感染。最终，大家决定一起外出测试新设备，展开一场充满欢笑和冒险的旅程。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取角色描述
                     * @return Characters 角色描述
                     * 
                     */
                    std::vector<Character> GetCharacters() const;

                    /**
                     * 设置角色描述
                     * @param _characters 角色描述
                     * 
                     */
                    void SetCharacters(const std::vector<Character>& _characters);

                    /**
                     * 判断参数 Characters 是否已赋值
                     * @return Characters 是否已赋值
                     * 
                     */
                    bool CharactersHasBeenSet() const;

                private:

                    /**
                     * 人物名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * ### 主题：\n武道修炼与科技创新的碰撞\n\n### 地点：\n布尔玛的实验室\n\n### 故事背景：\n布尔玛正在研发一种新型的龙珠雷达，旨在更精确地定位龙珠的位置。她邀请了孙悟空、天津饭、饺子和雅木茶前来测试新设备。然而，这些武道家们对科技的理解有限，导致了一系列有趣的误解和互动。\n\n### 人物关系：\n- **布尔玛**：天才科学家，负责研发和解释新设备。\n- **孙悟空**：纯粹的战斗狂，对科技一窍不通，但对新事物充满好奇。\n- **天津饭**：严肃自律的武道家，对科技持谨慎态度，但愿意尝试。\n- **饺子**：内向单纯，依赖天津饭，对科技感到困惑和害怕。\n- **雅木茶**：幽默自嘲的前沙漠强盗，对科技有一定了解，但更倾向于轻松调侃。\n\n### 人物目标：\n- **布尔玛**：希望新龙珠雷达能够得到有效测试，并得到反馈以改进。\n- **孙悟空**：希望通过新设备找到更强的对手进行战斗。\n- **天津饭**：希望通过测试新设备提升自己的武道修炼。\n- **饺子**：希望在不引起麻烦的情况下完成任务，并得到天津饭的认可。\n- **雅木茶**：希望通过参与测试证明自己的价值，同时享受与朋友们的互动。\n\n### 场景描述：\n布尔玛在实验室中展示她的新龙珠雷达，解释其工作原理和优势。孙悟空对设备的功能感到兴奋，但完全无法理解技术细节，不断提出天真的问题。天津饭则严肃地询问设备的安全性和可靠性，表现出对科技的谨慎态度。饺子对复杂的设备感到害怕，不断向天津饭寻求确认和安慰。雅木茶则在一旁调侃大家的反应，试图缓解紧张气氛。布尔玛在解释过程中不断被孙悟空的问题打断，感到无奈，但也被他的热情所感染。最终，大家决定一起外出测试新设备，展开一场充满欢笑和冒险的旅程。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色描述
                     */
                    std::vector<Character> m_characters;
                    bool m_charactersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCONFIG_H_
