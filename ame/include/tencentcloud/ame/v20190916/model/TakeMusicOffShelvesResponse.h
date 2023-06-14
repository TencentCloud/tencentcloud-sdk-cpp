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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * TakeMusicOffShelves返回参数结构体
                */
                class TakeMusicOffShelvesResponse : public AbstractModel
                {
                public:
                    TakeMusicOffShelvesResponse();
                    ~TakeMusicOffShelvesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回成功数量
                     * @return SuccessNum 返回成功数量
                     * 
                     */
                    int64_t GetSuccessNum() const;

                    /**
                     * 判断参数 SuccessNum 是否已赋值
                     * @return SuccessNum 是否已赋值
                     * 
                     */
                    bool SuccessNumHasBeenSet() const;

                    /**
                     * 获取返回失败数量
                     * @return FailedNum 返回失败数量
                     * 
                     */
                    int64_t GetFailedNum() const;

                    /**
                     * 判断参数 FailedNum 是否已赋值
                     * @return FailedNum 是否已赋值
                     * 
                     */
                    bool FailedNumHasBeenSet() const;

                    /**
                     * 获取返回失败歌曲musicId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedMusicIds 返回失败歌曲musicId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFailedMusicIds() const;

                    /**
                     * 判断参数 FailedMusicIds 是否已赋值
                     * @return FailedMusicIds 是否已赋值
                     * 
                     */
                    bool FailedMusicIdsHasBeenSet() const;

                private:

                    /**
                     * 返回成功数量
                     */
                    int64_t m_successNum;
                    bool m_successNumHasBeenSet;

                    /**
                     * 返回失败数量
                     */
                    int64_t m_failedNum;
                    bool m_failedNumHasBeenSet;

                    /**
                     * 返回失败歌曲musicId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_failedMusicIds;
                    bool m_failedMusicIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESRESPONSE_H_
