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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTEROUTPUTINFOREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTEROUTPUTINFOREQUEST_H_

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
                * DeleteCasterOutputInfo请求参数结构体
                */
                class DeleteCasterOutputInfoRequest : public AbstractModel
                {
                public:
                    DeleteCasterOutputInfoRequest();
                    ~DeleteCasterOutputInfoRequest() = default;
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
                     * 获取待删除的推流信息Index。
注：删除时，该Index对应的配置需要存在。
                     * @return OutputIndex 待删除的推流信息Index。
注：删除时，该Index对应的配置需要存在。
                     * 
                     */
                    uint64_t GetOutputIndex() const;

                    /**
                     * 设置待删除的推流信息Index。
注：删除时，该Index对应的配置需要存在。
                     * @param _outputIndex 待删除的推流信息Index。
注：删除时，该Index对应的配置需要存在。
                     * 
                     */
                    void SetOutputIndex(const uint64_t& _outputIndex);

                    /**
                     * 判断参数 OutputIndex 是否已赋值
                     * @return OutputIndex 是否已赋值
                     * 
                     */
                    bool OutputIndexHasBeenSet() const;

                private:

                    /**
                     * 导播台ID。
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 待删除的推流信息Index。
注：删除时，该Index对应的配置需要存在。
                     */
                    uint64_t m_outputIndex;
                    bool m_outputIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETECASTEROUTPUTINFOREQUEST_H_
