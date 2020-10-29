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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUBAPPIDSTATUSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUBAPPIDSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifySubAppIdStatus请求参数结构体
                */
                class ModifySubAppIdStatusRequest : public AbstractModel
                {
                public:
                    ModifySubAppIdStatusRequest();
                    ~ModifySubAppIdStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子应用 ID。
                     * @return SubAppId 子应用 ID。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置子应用 ID。
                     * @param SubAppId 子应用 ID。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取子应用状态，取值范围：
<li>On：启用。</li>
<li>Off：停用。</li>
<li>Destroyed：销毁。</li>
当前状态如果是 Destoying ，不能进行启用操作，需要等待销毁完成后才能重新启用。
                     * @return Status 子应用状态，取值范围：
<li>On：启用。</li>
<li>Off：停用。</li>
<li>Destroyed：销毁。</li>
当前状态如果是 Destoying ，不能进行启用操作，需要等待销毁完成后才能重新启用。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置子应用状态，取值范围：
<li>On：启用。</li>
<li>Off：停用。</li>
<li>Destroyed：销毁。</li>
当前状态如果是 Destoying ，不能进行启用操作，需要等待销毁完成后才能重新启用。
                     * @param Status 子应用状态，取值范围：
<li>On：启用。</li>
<li>Off：停用。</li>
<li>Destroyed：销毁。</li>
当前状态如果是 Destoying ，不能进行启用操作，需要等待销毁完成后才能重新启用。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 子应用 ID。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子应用状态，取值范围：
<li>On：启用。</li>
<li>Off：停用。</li>
<li>Destroyed：销毁。</li>
当前状态如果是 Destoying ，不能进行启用操作，需要等待销毁完成后才能重新启用。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYSUBAPPIDSTATUSREQUEST_H_
