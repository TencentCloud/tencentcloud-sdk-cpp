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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTDELETEREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTDELETEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * VoicePrintDelete请求参数结构体
                */
                class VoicePrintDeleteRequest : public AbstractModel
                {
                public:
                    VoicePrintDeleteRequest();
                    ~VoicePrintDeleteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取说话人id，说话人唯一标识
                     * @return VoicePrintId 说话人id，说话人唯一标识
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 设置说话人id，说话人唯一标识
                     * @param _voicePrintId 说话人id，说话人唯一标识
                     * 
                     */
                    void SetVoicePrintId(const std::string& _voicePrintId);

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                    /**
                     * 获取说话人分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * @return GroupId 说话人分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置说话人分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * @param _groupId 说话人分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取删除模式: 
0.默认值，删除该条声纹
1.从分组中删除该条声纹，声纹本身不删除
2.从声纹库中删除分组，仅删除分组信息，不会真正删除分组中的声纹
                     * @return DelMod 删除模式: 
0.默认值，删除该条声纹
1.从分组中删除该条声纹，声纹本身不删除
2.从声纹库中删除分组，仅删除分组信息，不会真正删除分组中的声纹
                     * 
                     */
                    int64_t GetDelMod() const;

                    /**
                     * 设置删除模式: 
0.默认值，删除该条声纹
1.从分组中删除该条声纹，声纹本身不删除
2.从声纹库中删除分组，仅删除分组信息，不会真正删除分组中的声纹
                     * @param _delMod 删除模式: 
0.默认值，删除该条声纹
1.从分组中删除该条声纹，声纹本身不删除
2.从声纹库中删除分组，仅删除分组信息，不会真正删除分组中的声纹
                     * 
                     */
                    void SetDelMod(const int64_t& _delMod);

                    /**
                     * 判断参数 DelMod 是否已赋值
                     * @return DelMod 是否已赋值
                     * 
                     */
                    bool DelModHasBeenSet() const;

                private:

                    /**
                     * 说话人id，说话人唯一标识
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                    /**
                     * 说话人分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 删除模式: 
0.默认值，删除该条声纹
1.从分组中删除该条声纹，声纹本身不删除
2.从声纹库中删除分组，仅删除分组信息，不会真正删除分组中的声纹
                     */
                    int64_t m_delMod;
                    bool m_delModHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTDELETEREQUEST_H_
