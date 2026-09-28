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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/VsmDigestItem.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetVsmMonitorInfo返回参数结构体
                */
                class GetVsmMonitorInfoResponse : public AbstractModel
                {
                public:
                    GetVsmMonitorInfoResponse();
                    ~GetVsmMonitorInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VSM监控信息</p>
                     * @return MonitorInfo <p>VSM监控信息</p>
                     * 
                     */
                    std::vector<std::string> GetMonitorInfo() const;

                    /**
                     * 判断参数 MonitorInfo 是否已赋值
                     * @return MonitorInfo 是否已赋值
                     * 
                     */
                    bool MonitorInfoHasBeenSet() const;

                    /**
                     * 获取<p>vsm摘要列表</p>
                     * @return DigestList <p>vsm摘要列表</p>
                     * 
                     */
                    std::vector<VsmDigestItem> GetDigestList() const;

                    /**
                     * 判断参数 DigestList 是否已赋值
                     * @return DigestList 是否已赋值
                     * 
                     */
                    bool DigestListHasBeenSet() const;

                    /**
                     * 获取<p>初始化状态</p>
                     * @return InitStatus <p>初始化状态</p>
                     * 
                     */
                    int64_t GetInitStatus() const;

                    /**
                     * 判断参数 InitStatus 是否已赋值
                     * @return InitStatus 是否已赋值
                     * 
                     */
                    bool InitStatusHasBeenSet() const;

                private:

                    /**
                     * <p>VSM监控信息</p>
                     */
                    std::vector<std::string> m_monitorInfo;
                    bool m_monitorInfoHasBeenSet;

                    /**
                     * <p>vsm摘要列表</p>
                     */
                    std::vector<VsmDigestItem> m_digestList;
                    bool m_digestListHasBeenSet;

                    /**
                     * <p>初始化状态</p>
                     */
                    int64_t m_initStatus;
                    bool m_initStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_
