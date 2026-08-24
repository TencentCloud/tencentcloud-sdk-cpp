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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/ResourceProtectStat.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 受保护资源概览
                */
                class ProtectedResourceOverview : public AbstractModel
                {
                public:
                    ProtectedResourceOverview();
                    ~ProtectedResourceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取受保护资源总数
                     * @return TotalProtectedCount 受保护资源总数
                     * 
                     */
                    int64_t GetTotalProtectedCount() const;

                    /**
                     * 设置受保护资源总数
                     * @param _totalProtectedCount 受保护资源总数
                     * 
                     */
                    void SetTotalProtectedCount(const int64_t& _totalProtectedCount);

                    /**
                     * 判断参数 TotalProtectedCount 是否已赋值
                     * @return TotalProtectedCount 是否已赋值
                     * 
                     */
                    bool TotalProtectedCountHasBeenSet() const;

                    /**
                     * 获取总资源数
                     * @return TotalResourceCount 总资源数
                     * 
                     */
                    int64_t GetTotalResourceCount() const;

                    /**
                     * 设置总资源数
                     * @param _totalResourceCount 总资源数
                     * 
                     */
                    void SetTotalResourceCount(const int64_t& _totalResourceCount);

                    /**
                     * 判断参数 TotalResourceCount 是否已赋值
                     * @return TotalResourceCount 是否已赋值
                     * 
                     */
                    bool TotalResourceCountHasBeenSet() const;

                    /**
                     * 获取CVM 受保护统计
                     * @return Cvm CVM 受保护统计
                     * 
                     */
                    ResourceProtectStat GetCvm() const;

                    /**
                     * 设置CVM 受保护统计
                     * @param _cvm CVM 受保护统计
                     * 
                     */
                    void SetCvm(const ResourceProtectStat& _cvm);

                    /**
                     * 判断参数 Cvm 是否已赋值
                     * @return Cvm 是否已赋值
                     * 
                     */
                    bool CvmHasBeenSet() const;

                    /**
                     * 获取CFS 受保护统计
                     * @return CFS CFS 受保护统计
                     * 
                     */
                    ResourceProtectStat GetCFS() const;

                    /**
                     * 设置CFS 受保护统计
                     * @param _cFS CFS 受保护统计
                     * 
                     */
                    void SetCFS(const ResourceProtectStat& _cFS);

                    /**
                     * 判断参数 CFS 是否已赋值
                     * @return CFS 是否已赋值
                     * 
                     */
                    bool CFSHasBeenSet() const;

                private:

                    /**
                     * 受保护资源总数
                     */
                    int64_t m_totalProtectedCount;
                    bool m_totalProtectedCountHasBeenSet;

                    /**
                     * 总资源数
                     */
                    int64_t m_totalResourceCount;
                    bool m_totalResourceCountHasBeenSet;

                    /**
                     * CVM 受保护统计
                     */
                    ResourceProtectStat m_cvm;
                    bool m_cvmHasBeenSet;

                    /**
                     * CFS 受保护统计
                     */
                    ResourceProtectStat m_cFS;
                    bool m_cFSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PROTECTEDRESOURCEOVERVIEW_H_
