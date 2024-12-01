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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERMARKPICINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERMARKPICINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteCasterMarkPicInfo请求参数结构体
                */
                class DeleteCasterMarkPicInfoRequest : public AbstractModel
                {
                public:
                    DeleteCasterMarkPicInfoRequest();
                    ~DeleteCasterMarkPicInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台ID。
                     * @return CasterId 导播台ID。
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID。
                     * @param _casterId 导播台ID。
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取需要删除的水印Index。
                     * @return MarkPicIndex 需要删除的水印Index。
                     * 
                     */
                    int64_t GetMarkPicIndex() const;

                    /**
                     * 设置需要删除的水印Index。
                     * @param _markPicIndex 需要删除的水印Index。
                     * 
                     */
                    void SetMarkPicIndex(const int64_t& _markPicIndex);

                    /**
                     * 判断参数 MarkPicIndex 是否已赋值
                     * @return MarkPicIndex 是否已赋值
                     * 
                     */
                    bool MarkPicIndexHasBeenSet() const;

                private:

                    /**
                     * 导播台ID。
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 需要删除的水印Index。
                     */
                    int64_t m_markPicIndex;
                    bool m_markPicIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTERMARKPICINFOREQUEST_H_
