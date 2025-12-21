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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CasterInputInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * AddCasterInputInfo请求参数结构体
                */
                class AddCasterInputInfoRequest : public AbstractModel
                {
                public:
                    AddCasterInputInfoRequest();
                    ~AddCasterInputInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导播台ID。</p>
                     * @return CasterId <p>导播台ID。</p>
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置<p>导播台ID。</p>
                     * @param _casterId <p>导播台ID。</p>
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
                     * 获取<p>导播台输入源详细信息。</p>
                     * @return InputInfo <p>导播台输入源详细信息。</p>
                     * 
                     */
                    CasterInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>导播台输入源详细信息。</p>
                     * @param _inputInfo <p>导播台输入源详细信息。</p>
                     * 
                     */
                    void SetInputInfo(const CasterInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                private:

                    /**
                     * <p>导播台ID。</p>
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * <p>导播台输入源详细信息。</p>
                     */
                    CasterInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_ADDCASTERINPUTINFOREQUEST_H_
