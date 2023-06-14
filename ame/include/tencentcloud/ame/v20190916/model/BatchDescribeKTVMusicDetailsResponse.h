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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicDetailInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
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
                     * 获取歌曲详情列表信息
                     * @return KTVMusicDetailInfoSet 歌曲详情列表信息
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
                     * 获取不存在的歌曲 ID 列表。
                     * @return NotExistMusicIdSet 不存在的歌曲 ID 列表。
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
                     * 歌曲详情列表信息
                     */
                    std::vector<KTVMusicDetailInfo> m_kTVMusicDetailInfoSet;
                    bool m_kTVMusicDetailInfoSetHasBeenSet;

                    /**
                     * 不存在的歌曲 ID 列表。
                     */
                    std::vector<std::string> m_notExistMusicIdSet;
                    bool m_notExistMusicIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSRESPONSE_H_
