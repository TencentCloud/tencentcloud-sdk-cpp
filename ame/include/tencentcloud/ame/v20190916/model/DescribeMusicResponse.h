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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/Music.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeMusic返回参数结构体
                */
                class DescribeMusicResponse : public AbstractModel
                {
                public:
                    DescribeMusicResponse();
                    ~DescribeMusicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取音乐相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Music 音乐相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Music GetMusic() const;

                    /**
                     * 判断参数 Music 是否已赋值
                     * @return Music 是否已赋值
                     * 
                     */
                    bool MusicHasBeenSet() const;

                private:

                    /**
                     * 音乐相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Music m_music;
                    bool m_musicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICRESPONSE_H_
