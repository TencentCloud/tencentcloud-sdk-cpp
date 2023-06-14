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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBusinessIntelligenceFile请求参数结构体
                */
                class DescribeBusinessIntelligenceFileRequest : public AbstractModel
                {
                public:
                    DescribeBusinessIntelligenceFileRequest();
                    ~DescribeBusinessIntelligenceFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取迁移任务状态集合,1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * @return StatusSet 迁移任务状态集合,1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * 
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置迁移任务状态集合,1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * @param _statusSet 迁移任务状态集合,1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * 
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     * 
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取文件类型 FLAT-平面文件，SSIS商业智能服务项目文件
                     * @return FileType 文件类型 FLAT-平面文件，SSIS商业智能服务项目文件
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型 FLAT-平面文件，SSIS商业智能服务项目文件
                     * @param _fileType 文件类型 FLAT-平面文件，SSIS商业智能服务项目文件
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取分页，页大小，范围1-100
                     * @return Limit 分页，页大小，范围1-100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页，页大小，范围1-100
                     * @param _limit 分页，页大小，范围1-100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页,页数，默认0
                     * @return Offset 分页,页数，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页,页数，默认0
                     * @param _offset 分页,页数，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序字段，可选值file_name,create_time,start_time
                     * @return OrderBy 排序字段，可选值file_name,create_time,start_time
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选值file_name,create_time,start_time
                     * @param _orderBy 排序字段，可选值file_name,create_time,start_time
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
                     * 获取排序方式，desc,asc
                     * @return OrderByType 排序方式，desc,asc
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，desc,asc
                     * @param _orderByType 排序方式，desc,asc
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 迁移任务状态集合,1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 文件类型 FLAT-平面文件，SSIS商业智能服务项目文件
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 分页，页大小，范围1-100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页,页数，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，可选值file_name,create_time,start_time
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，desc,asc
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBUSINESSINTELLIGENCEFILEREQUEST_H_
