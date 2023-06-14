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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REMOVEREALSERVERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REMOVEREALSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * RemoveRealServers请求参数结构体
                */
                class RemoveRealServersRequest : public AbstractModel
                {
                public:
                    RemoveRealServersRequest();
                    ~RemoveRealServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源站Id列表
                     * @return RealServerIds 源站Id列表
                     * 
                     */
                    std::vector<std::string> GetRealServerIds() const;

                    /**
                     * 设置源站Id列表
                     * @param _realServerIds 源站Id列表
                     * 
                     */
                    void SetRealServerIds(const std::vector<std::string>& _realServerIds);

                    /**
                     * 判断参数 RealServerIds 是否已赋值
                     * @return RealServerIds 是否已赋值
                     * 
                     */
                    bool RealServerIdsHasBeenSet() const;

                private:

                    /**
                     * 源站Id列表
                     */
                    std::vector<std::string> m_realServerIds;
                    bool m_realServerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REMOVEREALSERVERSREQUEST_H_
