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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_

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
                * BatchDescribeKTVMusicDetails请求参数结构体
                */
                class BatchDescribeKTVMusicDetailsRequest : public AbstractModel
                {
                public:
                    BatchDescribeKTVMusicDetailsRequest();
                    ~BatchDescribeKTVMusicDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取歌曲Id列表，注：列表最大长度为50
                     * @return MusicIds 歌曲Id列表，注：列表最大长度为50
                     * 
                     */
                    std::vector<std::string> GetMusicIds() const;

                    /**
                     * 设置歌曲Id列表，注：列表最大长度为50
                     * @param _musicIds 歌曲Id列表，注：列表最大长度为50
                     * 
                     */
                    void SetMusicIds(const std::vector<std::string>& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     * 
                     */
                    bool MusicIdsHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id列表，注：列表最大长度为50
                     */
                    std::vector<std::string> m_musicIds;
                    bool m_musicIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_BATCHDESCRIBEKTVMUSICDETAILSREQUEST_H_
