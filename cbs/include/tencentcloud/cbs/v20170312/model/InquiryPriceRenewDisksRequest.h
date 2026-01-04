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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDisks请求参数结构体
                */
                class InquiryPriceRenewDisksRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewDisksRequest();
                    ~InquiryPriceRenewDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云硬盘ID， 通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * @return DiskIds <p>云硬盘ID， 通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置<p>云硬盘ID， 通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * @param _diskIds <p>云硬盘ID， 通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云盘的购买时长。如果在该参数中指定CurInstanceDeadline，则会按对齐到子机到期时间来续费。如果是批量续费询价，该参数与Disks参数一一对应，元素数量需保持一致。</p>
                     * @return DiskChargePrepaids <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云盘的购买时长。如果在该参数中指定CurInstanceDeadline，则会按对齐到子机到期时间来续费。如果是批量续费询价，该参数与Disks参数一一对应，元素数量需保持一致。</p>
                     * 
                     */
                    std::vector<DiskChargePrepaid> GetDiskChargePrepaids() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云盘的购买时长。如果在该参数中指定CurInstanceDeadline，则会按对齐到子机到期时间来续费。如果是批量续费询价，该参数与Disks参数一一对应，元素数量需保持一致。</p>
                     * @param _diskChargePrepaids <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云盘的购买时长。如果在该参数中指定CurInstanceDeadline，则会按对齐到子机到期时间来续费。如果是批量续费询价，该参数与Disks参数一一对应，元素数量需保持一致。</p>
                     * 
                     */
                    void SetDiskChargePrepaids(const std::vector<DiskChargePrepaid>& _diskChargePrepaids);

                    /**
                     * 判断参数 DiskChargePrepaids 是否已赋值
                     * @return DiskChargePrepaids 是否已赋值
                     * 
                     */
                    bool DiskChargePrepaidsHasBeenSet() const;

                    /**
                     * 获取<p>指定云硬盘新的到期时间，形式如：2017-12-17 00:00:00。参数<code>NewDeadline</code>和<code>DiskChargePrepaids</code>是两种指定询价时长的方式，两者必传一个。</p>
                     * @return NewDeadline <p>指定云硬盘新的到期时间，形式如：2017-12-17 00:00:00。参数<code>NewDeadline</code>和<code>DiskChargePrepaids</code>是两种指定询价时长的方式，两者必传一个。</p>
                     * 
                     */
                    std::string GetNewDeadline() const;

                    /**
                     * 设置<p>指定云硬盘新的到期时间，形式如：2017-12-17 00:00:00。参数<code>NewDeadline</code>和<code>DiskChargePrepaids</code>是两种指定询价时长的方式，两者必传一个。</p>
                     * @param _newDeadline <p>指定云硬盘新的到期时间，形式如：2017-12-17 00:00:00。参数<code>NewDeadline</code>和<code>DiskChargePrepaids</code>是两种指定询价时长的方式，两者必传一个。</p>
                     * 
                     */
                    void SetNewDeadline(const std::string& _newDeadline);

                    /**
                     * 判断参数 NewDeadline 是否已赋值
                     * @return NewDeadline 是否已赋值
                     * 
                     */
                    bool NewDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘所属项目ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。 如传入则仅用于鉴权。</p>
                     * @return ProjectId <p>云硬盘所属项目ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。 如传入则仅用于鉴权。</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>云硬盘所属项目ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。 如传入则仅用于鉴权。</p>
                     * @param _projectId <p>云硬盘所属项目ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。 如传入则仅用于鉴权。</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * <p>云硬盘ID， 通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月云盘的购买时长。如果在该参数中指定CurInstanceDeadline，则会按对齐到子机到期时间来续费。如果是批量续费询价，该参数与Disks参数一一对应，元素数量需保持一致。</p>
                     */
                    std::vector<DiskChargePrepaid> m_diskChargePrepaids;
                    bool m_diskChargePrepaidsHasBeenSet;

                    /**
                     * <p>指定云硬盘新的到期时间，形式如：2017-12-17 00:00:00。参数<code>NewDeadline</code>和<code>DiskChargePrepaids</code>是两种指定询价时长的方式，两者必传一个。</p>
                     */
                    std::string m_newDeadline;
                    bool m_newDeadlineHasBeenSet;

                    /**
                     * <p>云硬盘所属项目ID。该参数可以通过调用<a href="https://cloud.tencent.com/document/api/651/78725">DescribeProject</a> 的返回值中的 projectId 字段来获取。 如传入则仅用于鉴权。</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERENEWDISKSREQUEST_H_
