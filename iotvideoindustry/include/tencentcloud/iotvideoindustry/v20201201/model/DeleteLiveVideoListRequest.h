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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVEVIDEOLISTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVEVIDEOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DeleteLiveVideoList请求参数结构体
                */
                class DeleteLiveVideoListRequest : public AbstractModel
                {
                public:
                    DeleteLiveVideoListRequest();
                    ~DeleteLiveVideoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频ID 列表, 大小限制(100)
                     * @return IntIDs 视频ID 列表, 大小限制(100)
                     * 
                     */
                    std::vector<uint64_t> GetIntIDs() const;

                    /**
                     * 设置视频ID 列表, 大小限制(100)
                     * @param _intIDs 视频ID 列表, 大小限制(100)
                     * 
                     */
                    void SetIntIDs(const std::vector<uint64_t>& _intIDs);

                    /**
                     * 判断参数 IntIDs 是否已赋值
                     * @return IntIDs 是否已赋值
                     * 
                     */
                    bool IntIDsHasBeenSet() const;

                private:

                    /**
                     * 视频ID 列表, 大小限制(100)
                     */
                    std::vector<uint64_t> m_intIDs;
                    bool m_intIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DELETELIVEVIDEOLISTREQUEST_H_
