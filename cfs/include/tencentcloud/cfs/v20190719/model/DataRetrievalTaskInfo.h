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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DATARETRIEVALTASKINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DATARETRIEVALTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 数据检索任务信息
                */
                class DataRetrievalTaskInfo : public AbstractModel
                {
                public:
                    DataRetrievalTaskInfo();
                    ~DataRetrievalTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据检索任务ID<br>示例值：dataretrievaltask-123456</p>
                     * @return DataRetrievalTaskID <p>数据检索任务ID<br>示例值：dataretrievaltask-123456</p>
                     * 
                     */
                    std::string GetDataRetrievalTaskID() const;

                    /**
                     * 设置<p>数据检索任务ID<br>示例值：dataretrievaltask-123456</p>
                     * @param _dataRetrievalTaskID <p>数据检索任务ID<br>示例值：dataretrievaltask-123456</p>
                     * 
                     */
                    void SetDataRetrievalTaskID(const std::string& _dataRetrievalTaskID);

                    /**
                     * 判断参数 DataRetrievalTaskID 是否已赋值
                     * @return DataRetrievalTaskID 是否已赋值
                     * 
                     */
                    bool DataRetrievalTaskIDHasBeenSet() const;

                    /**
                     * 获取<p>迁移任务id<br>示例值：migrate-001</p>
                     * @return DataRetrievalId <p>迁移任务id<br>示例值：migrate-001</p>
                     * 
                     */
                    std::string GetDataRetrievalId() const;

                    /**
                     * 设置<p>迁移任务id<br>示例值：migrate-001</p>
                     * @param _dataRetrievalId <p>迁移任务id<br>示例值：migrate-001</p>
                     * 
                     */
                    void SetDataRetrievalId(const std::string& _dataRetrievalId);

                    /**
                     * 判断参数 DataRetrievalId 是否已赋值
                     * @return DataRetrievalId 是否已赋值
                     * 
                     */
                    bool DataRetrievalIdHasBeenSet() const;

                    /**
                     * 获取<p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取示例值：cfs-xxxxxx</p>
                     * @return FileSystemId <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取示例值：cfs-xxxxxx</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取示例值：cfs-xxxxxx</p>
                     * @param _fileSystemId <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取示例值：cfs-xxxxxx</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>聚合检索条件<br>示例值：from entries|where size &gt;4096</p>
                     * @return CompoundCondition <p>聚合检索条件<br>示例值：from entries|where size &gt;4096</p>
                     * 
                     */
                    std::string GetCompoundCondition() const;

                    /**
                     * 设置<p>聚合检索条件<br>示例值：from entries|where size &gt;4096</p>
                     * @param _compoundCondition <p>聚合检索条件<br>示例值：from entries|where size &gt;4096</p>
                     * 
                     */
                    void SetCompoundCondition(const std::string& _compoundCondition);

                    /**
                     * 判断参数 CompoundCondition 是否已赋值
                     * @return CompoundCondition 是否已赋值
                     * 
                     */
                    bool CompoundConditionHasBeenSet() const;

                    /**
                     * 获取<p>列表检索条件</p>
                     * @return QueryCondition <p>列表检索条件</p>
                     * 
                     */
                    std::string GetQueryCondition() const;

                    /**
                     * 设置<p>列表检索条件</p>
                     * @param _queryCondition <p>列表检索条件</p>
                     * 
                     */
                    void SetQueryCondition(const std::string& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     * 
                     */
                    bool QueryConditionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间<br>示例值：2023-01-09 15:03:57</p>
                     * @return CreateTime <p>创建时间<br>示例值：2023-01-09 15:03:57</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间<br>示例值：2023-01-09 15:03:57</p>
                     * @param _createTime <p>创建时间<br>示例值：2023-01-09 15:03:57</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态<br>已完成：completed<br>排队中：waiting<br>进行中：running<br>失败：failed</p>
                     * @return State <p>任务状态<br>已完成：completed<br>排队中：waiting<br>进行中：running<br>失败：failed</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>任务状态<br>已完成：completed<br>排队中：waiting<br>进行中：running<br>失败：failed</p>
                     * @param _state <p>任务状态<br>已完成：completed<br>排队中：waiting<br>进行中：running<br>失败：failed</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>文件数量<br>示例：1000</p>
                     * @return FileNum <p>文件数量<br>示例：1000</p>
                     * 
                     */
                    uint64_t GetFileNum() const;

                    /**
                     * 设置<p>文件数量<br>示例：1000</p>
                     * @param _fileNum <p>文件数量<br>示例：1000</p>
                     * 
                     */
                    void SetFileNum(const uint64_t& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     * 
                     */
                    bool FileNumHasBeenSet() const;

                    /**
                     * 获取<p>目录数量<br>示例：1000</p>
                     * @return DirNum <p>目录数量<br>示例：1000</p>
                     * 
                     */
                    uint64_t GetDirNum() const;

                    /**
                     * 设置<p>目录数量<br>示例：1000</p>
                     * @param _dirNum <p>目录数量<br>示例：1000</p>
                     * 
                     */
                    void SetDirNum(const uint64_t& _dirNum);

                    /**
                     * 判断参数 DirNum 是否已赋值
                     * @return DirNum 是否已赋值
                     * 
                     */
                    bool DirNumHasBeenSet() const;

                    /**
                     * 获取<p>总文件大小，单位KiB<br>示例：1024</p>
                     * @return Size <p>总文件大小，单位KiB<br>示例：1024</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>总文件大小，单位KiB<br>示例：1024</p>
                     * @param _size <p>总文件大小，单位KiB<br>示例：1024</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>文件清单下载地址<br>示例值：https://xx-12345.cos.ap-shanghai.myqcloud.com/list.csv</p>
                     * @return FileList <p>文件清单下载地址<br>示例值：https://xx-12345.cos.ap-shanghai.myqcloud.com/list.csv</p>
                     * 
                     */
                    std::string GetFileList() const;

                    /**
                     * 设置<p>文件清单下载地址<br>示例值：https://xx-12345.cos.ap-shanghai.myqcloud.com/list.csv</p>
                     * @param _fileList <p>文件清单下载地址<br>示例值：https://xx-12345.cos.ap-shanghai.myqcloud.com/list.csv</p>
                     * 
                     */
                    void SetFileList(const std::string& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                    /**
                     * 获取<p>检索错误提示。默认：Null，当Status为failed时，将提示信息展示给用户。</p>
                     * @return ErrorInfo <p>检索错误提示。默认：Null，当Status为failed时，将提示信息展示给用户。</p>
                     * 
                     */
                    std::string GetErrorInfo() const;

                    /**
                     * 设置<p>检索错误提示。默认：Null，当Status为failed时，将提示信息展示给用户。</p>
                     * @param _errorInfo <p>检索错误提示。默认：Null，当Status为failed时，将提示信息展示给用户。</p>
                     * 
                     */
                    void SetErrorInfo(const std::string& _errorInfo);

                    /**
                     * 判断参数 ErrorInfo 是否已赋值
                     * @return ErrorInfo 是否已赋值
                     * 
                     */
                    bool ErrorInfoHasBeenSet() const;

                private:

                    /**
                     * <p>数据检索任务ID<br>示例值：dataretrievaltask-123456</p>
                     */
                    std::string m_dataRetrievalTaskID;
                    bool m_dataRetrievalTaskIDHasBeenSet;

                    /**
                     * <p>迁移任务id<br>示例值：migrate-001</p>
                     */
                    std::string m_dataRetrievalId;
                    bool m_dataRetrievalIdHasBeenSet;

                    /**
                     * <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取示例值：cfs-xxxxxx</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>聚合检索条件<br>示例值：from entries|where size &gt;4096</p>
                     */
                    std::string m_compoundCondition;
                    bool m_compoundConditionHasBeenSet;

                    /**
                     * <p>列表检索条件</p>
                     */
                    std::string m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                    /**
                     * <p>创建时间<br>示例值：2023-01-09 15:03:57</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务状态<br>已完成：completed<br>排队中：waiting<br>进行中：running<br>失败：failed</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>文件数量<br>示例：1000</p>
                     */
                    uint64_t m_fileNum;
                    bool m_fileNumHasBeenSet;

                    /**
                     * <p>目录数量<br>示例：1000</p>
                     */
                    uint64_t m_dirNum;
                    bool m_dirNumHasBeenSet;

                    /**
                     * <p>总文件大小，单位KiB<br>示例：1024</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>文件清单下载地址<br>示例值：https://xx-12345.cos.ap-shanghai.myqcloud.com/list.csv</p>
                     */
                    std::string m_fileList;
                    bool m_fileListHasBeenSet;

                    /**
                     * <p>检索错误提示。默认：Null，当Status为failed时，将提示信息展示给用户。</p>
                     */
                    std::string m_errorInfo;
                    bool m_errorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DATARETRIEVALTASKINFO_H_
