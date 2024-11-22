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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COPYCASTERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COPYCASTERREQUEST_H_

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
                * CopyCaster请求参数结构体
                */
                class CopyCasterRequest : public AbstractModel
                {
                public:
                    CopyCasterRequest();
                    ~CopyCasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源导播台的ID
                     * @return CasterId 源导播台的ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置源导播台的ID
                     * @param _casterId 源导播台的ID
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
                     * 获取复制产生的新导播台名称
                     * @return CasterName 复制产生的新导播台名称
                     * 
                     */
                    std::string GetCasterName() const;

                    /**
                     * 设置复制产生的新导播台名称
                     * @param _casterName 复制产生的新导播台名称
                     * 
                     */
                    void SetCasterName(const std::string& _casterName);

                    /**
                     * 判断参数 CasterName 是否已赋值
                     * @return CasterName 是否已赋值
                     * 
                     */
                    bool CasterNameHasBeenSet() const;

                    /**
                     * 获取复制产生的导播台推送到云直播的流id
注意：该流id不能与云直播中的流id重复
                     * @return OutputStreamId 复制产生的导播台推送到云直播的流id
注意：该流id不能与云直播中的流id重复
                     * 
                     */
                    std::string GetOutputStreamId() const;

                    /**
                     * 设置复制产生的导播台推送到云直播的流id
注意：该流id不能与云直播中的流id重复
                     * @param _outputStreamId 复制产生的导播台推送到云直播的流id
注意：该流id不能与云直播中的流id重复
                     * 
                     */
                    void SetOutputStreamId(const std::string& _outputStreamId);

                    /**
                     * 判断参数 OutputStreamId 是否已赋值
                     * @return OutputStreamId 是否已赋值
                     * 
                     */
                    bool OutputStreamIdHasBeenSet() const;

                private:

                    /**
                     * 源导播台的ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 复制产生的新导播台名称
                     */
                    std::string m_casterName;
                    bool m_casterNameHasBeenSet;

                    /**
                     * 复制产生的导播台推送到云直播的流id
注意：该流id不能与云直播中的流id重复
                     */
                    std::string m_outputStreamId;
                    bool m_outputStreamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COPYCASTERREQUEST_H_
