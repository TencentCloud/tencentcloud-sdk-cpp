/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERMARKPICINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERMARKPICINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CasterMarkPicInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyCasterMarkPicInfo请求参数结构体
                */
                class ModifyCasterMarkPicInfoRequest : public AbstractModel
                {
                public:
                    ModifyCasterMarkPicInfoRequest();
                    ~ModifyCasterMarkPicInfoRequest() = default;
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
                     * 获取新的水印信息。
                     * @return MarkPicInfo 新的水印信息。
                     * 
                     */
                    CasterMarkPicInfo GetMarkPicInfo() const;

                    /**
                     * 设置新的水印信息。
                     * @param _markPicInfo 新的水印信息。
                     * 
                     */
                    void SetMarkPicInfo(const CasterMarkPicInfo& _markPicInfo);

                    /**
                     * 判断参数 MarkPicInfo 是否已赋值
                     * @return MarkPicInfo 是否已赋值
                     * 
                     */
                    bool MarkPicInfoHasBeenSet() const;

                private:

                    /**
                     * 导播台ID。
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 新的水印信息。
                     */
                    CasterMarkPicInfo m_markPicInfo;
                    bool m_markPicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERMARKPICINFOREQUEST_H_
