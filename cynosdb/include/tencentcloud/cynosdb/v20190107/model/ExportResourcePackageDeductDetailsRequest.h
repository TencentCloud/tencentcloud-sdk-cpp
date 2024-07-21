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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ExportResourcePackageDeductDetails请求参数结构体
                */
                class ExportResourcePackageDeductDetailsRequest : public AbstractModel
                {
                public:
                    ExportResourcePackageDeductDetailsRequest();
                    ~ExportResourcePackageDeductDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要导出的资源包ID
                     * @return PackageId 需要导出的资源包ID
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置需要导出的资源包ID
                     * @param _packageId 需要导出的资源包ID
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取使用资源包容量的cynos集群ID
                     * @return ClusterIds 使用资源包容量的cynos集群ID
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置使用资源包容量的cynos集群ID
                     * @param _clusterIds 使用资源包容量的cynos集群ID
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取排序字段，目前支持：createTime（资源包被抵扣时间），successDeductSpec（资源包抵扣量）
                     * @return OrderBy 排序字段，目前支持：createTime（资源包被抵扣时间），successDeductSpec（资源包抵扣量）
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，目前支持：createTime（资源包被抵扣时间），successDeductSpec（资源包抵扣量）
                     * @param _orderBy 排序字段，目前支持：createTime（资源包被抵扣时间），successDeductSpec（资源包抵扣量）
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型，支持ASC、DESC、asc、desc
                     * @return OrderByType 排序类型，支持ASC、DESC、asc、desc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型，支持ASC、DESC、asc、desc
                     * @param _orderByType 排序类型，支持ASC、DESC、asc、desc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取单次最大导出数据行数，目前最大支持2000行
                     * @return Limit 单次最大导出数据行数，目前最大支持2000行
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置单次最大导出数据行数，目前最大支持2000行
                     * @param _limit 单次最大导出数据行数，目前最大支持2000行
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量页数
                     * @return Offset 偏移量页数
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量页数
                     * @param _offset 偏移量页数
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取导出数据格式，目前仅支持csv格式，留作扩展
                     * @return FileType 导出数据格式，目前仅支持csv格式，留作扩展
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置导出数据格式，目前仅支持csv格式，留作扩展
                     * @param _fileType 导出数据格式，目前仅支持csv格式，留作扩展
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * 需要导出的资源包ID
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 使用资源包容量的cynos集群ID
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 排序字段，目前支持：createTime（资源包被抵扣时间），successDeductSpec（资源包抵扣量）
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型，支持ASC、DESC、asc、desc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 单次最大导出数据行数，目前最大支持2000行
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量页数
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 导出数据格式，目前仅支持csv格式，留作扩展
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTRESOURCEPACKAGEDEDUCTDETAILSREQUEST_H_
