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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/AttachDetail.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeInstancesDiskNum返回参数结构体
                */
                class DescribeInstancesDiskNumResponse : public AbstractModel
                {
                public:
                    DescribeInstancesDiskNumResponse();
                    ~DescribeInstancesDiskNumResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各个云服务器已挂载和可挂载弹性云盘的数量。
                     * @return AttachDetail 各个云服务器已挂载和可挂载弹性云盘的数量。
                     * 
                     */
                    std::vector<AttachDetail> GetAttachDetail() const;

                    /**
                     * 判断参数 AttachDetail 是否已赋值
                     * @return AttachDetail 是否已赋值
                     * 
                     */
                    bool AttachDetailHasBeenSet() const;

                private:

                    /**
                     * 各个云服务器已挂载和可挂载弹性云盘的数量。
                     */
                    std::vector<AttachDetail> m_attachDetail;
                    bool m_attachDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEINSTANCESDISKNUMRESPONSE_H_
