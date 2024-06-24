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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTREQUEST_H_

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
                * VoicePrintCount请求参数结构体
                */
                class VoicePrintCountRequest : public AbstractModel
                {
                public:
                    VoicePrintCountRequest();
                    ~VoicePrintCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * @return GroupId 分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     * @param _groupId 分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
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
                     * 获取统计模式
0: 统计所有声纹数量
1: 统计指定分组下的声纹数量
                     * @return CountMod 统计模式
0: 统计所有声纹数量
1: 统计指定分组下的声纹数量
                     * 
                     */
                    int64_t GetCountMod() const;

                    /**
                     * 设置统计模式
0: 统计所有声纹数量
1: 统计指定分组下的声纹数量
                     * @param _countMod 统计模式
0: 统计所有声纹数量
1: 统计指定分组下的声纹数量
                     * 
                     */
                    void SetCountMod(const int64_t& _countMod);

                    /**
                     * 判断参数 CountMod 是否已赋值
                     * @return CountMod 是否已赋值
                     * 
                     */
                    bool CountModHasBeenSet() const;

                private:

                    /**
                     * 分组ID,仅支持大小写字母和下划线的组合，不超过128个字符
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 统计模式
0: 统计所有声纹数量
1: 统计指定分组下的声纹数量
                     */
                    int64_t m_countMod;
                    bool m_countModHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VOICEPRINTCOUNTREQUEST_H_
