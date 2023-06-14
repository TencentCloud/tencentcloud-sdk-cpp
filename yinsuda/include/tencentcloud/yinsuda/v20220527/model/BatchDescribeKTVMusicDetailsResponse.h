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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVMusicDetailInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * BatchDescribeKTVMusicDetails返回参数结构体
                */
                class BatchDescribeKTVMusicDetailsResponse : public AbstractModel
                {
                public:
                    BatchDescribeKTVMusicDetailsResponse();
                    ~BatchDescribeKTVMusicDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲详细信息列表。
                     * @return KTVMusicDetailInfoSet 歌曲详细信息列表。
                     * 
                     */
                    std::vector<KTVMusicDetailInfo> GetKTVMusicDetailInfoSet() const;

                    /**
                     * 判断参数 KTVMusicDetailInfoSet 是否已赋值
                     * @return KTVMusicDetailInfoSet 是否已赋值
                     * 
                     */
                    bool KTVMusicDetailInfoSetHasBeenSet() const;

                    /**
                     * 获取不存在歌曲Id列表。
                     * @return NotExistMusicIdSet 不存在歌曲Id列表。
                     * 
                     */
                    std::vector<std::string> GetNotExistMusicIdSet() const;

                    /**
                     * 判断参数 NotExistMusicIdSet 是否已赋值
                     * @return NotExistMusicIdSet 是否已赋值
                     * 
                     */
                    bool NotExistMusicIdSetHasBeenSet() const;

                private:

                    /**
                     * 歌曲详细信息列表。
                     */
                    std::vector<KTVMusicDetailInfo> m_kTVMusicDetailInfoSet;
                    bool m_kTVMusicDetailInfoSetHasBeenSet;

                    /**
                     * 不存在歌曲Id列表。
                     */
                    std::vector<std::string> m_notExistMusicIdSet;
                    bool m_notExistMusicIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_
