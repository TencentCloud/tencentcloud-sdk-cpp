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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MAPPEDBUCKET_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MAPPEDBUCKET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 关联的对象Bucket, 并将其映射到文件系统某个路径上
                */
                class MappedBucket : public AbstractModel
                {
                public:
                    MappedBucket();
                    ~MappedBucket() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象存储Bucket名
                     * @return BucketName 对象存储Bucket名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置对象存储Bucket名
                     * @param _bucketName 对象存储Bucket名
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取映射到的文件系统路径, 默认为/
                     * @return FileSystemPath 映射到的文件系统路径, 默认为/
                     * 
                     */
                    std::string GetFileSystemPath() const;

                    /**
                     * 设置映射到的文件系统路径, 默认为/
                     * @param _fileSystemPath 映射到的文件系统路径, 默认为/
                     * 
                     */
                    void SetFileSystemPath(const std::string& _fileSystemPath);

                    /**
                     * 判断参数 FileSystemPath 是否已赋值
                     * @return FileSystemPath 是否已赋值
                     * 
                     */
                    bool FileSystemPathHasBeenSet() const;

                    /**
                     * 获取数据流动的自动策略, 包含加载与沉降。策略可以是多种的组合
按需加载(OnDemandImport)
自动加载元数据(AutoImportMeta)
自动加载数据(AutoImportData)
周期加载(PeriodImport)

周期沉降(PeriodExport)
立即沉降(ImmediateExport)
                     * @return DataRepositoryTaskAutoStrategy 数据流动的自动策略, 包含加载与沉降。策略可以是多种的组合
按需加载(OnDemandImport)
自动加载元数据(AutoImportMeta)
自动加载数据(AutoImportData)
周期加载(PeriodImport)

周期沉降(PeriodExport)
立即沉降(ImmediateExport)
                     * 
                     */
                    std::vector<std::string> GetDataRepositoryTaskAutoStrategy() const;

                    /**
                     * 设置数据流动的自动策略, 包含加载与沉降。策略可以是多种的组合
按需加载(OnDemandImport)
自动加载元数据(AutoImportMeta)
自动加载数据(AutoImportData)
周期加载(PeriodImport)

周期沉降(PeriodExport)
立即沉降(ImmediateExport)
                     * @param _dataRepositoryTaskAutoStrategy 数据流动的自动策略, 包含加载与沉降。策略可以是多种的组合
按需加载(OnDemandImport)
自动加载元数据(AutoImportMeta)
自动加载数据(AutoImportData)
周期加载(PeriodImport)

周期沉降(PeriodExport)
立即沉降(ImmediateExport)
                     * 
                     */
                    void SetDataRepositoryTaskAutoStrategy(const std::vector<std::string>& _dataRepositoryTaskAutoStrategy);

                    /**
                     * 判断参数 DataRepositoryTaskAutoStrategy 是否已赋值
                     * @return DataRepositoryTaskAutoStrategy 是否已赋值
                     * 
                     */
                    bool DataRepositoryTaskAutoStrategyHasBeenSet() const;

                    /**
                     * 获取绑定bucket的数据流动策略ID
                     * @return RuleId 绑定bucket的数据流动策略ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置绑定bucket的数据流动策略ID
                     * @param _ruleId 绑定bucket的数据流动策略ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取规则备注与描述
                     * @return RuleDescription 规则备注与描述
                     * 
                     */
                    std::string GetRuleDescription() const;

                    /**
                     * 设置规则备注与描述
                     * @param _ruleDescription 规则备注与描述
                     * 
                     */
                    void SetRuleDescription(const std::string& _ruleDescription);

                    /**
                     * 判断参数 RuleDescription 是否已赋值
                     * @return RuleDescription 是否已赋值
                     * 
                     */
                    bool RuleDescriptionHasBeenSet() const;

                    /**
                     * 获取桶关联状态 0：关联中 1：关联完成
                     * @return Status 桶关联状态 0：关联中 1：关联完成
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置桶关联状态 0：关联中 1：关联完成
                     * @param _status 桶关联状态 0：关联中 1：关联完成
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否使用全球加速域名
                     * @return AccelerateFlag 是否使用全球加速域名
                     * 
                     */
                    bool GetAccelerateFlag() const;

                    /**
                     * 设置是否使用全球加速域名
                     * @param _accelerateFlag 是否使用全球加速域名
                     * 
                     */
                    void SetAccelerateFlag(const bool& _accelerateFlag);

                    /**
                     * 判断参数 AccelerateFlag 是否已赋值
                     * @return AccelerateFlag 是否已赋值
                     * 
                     */
                    bool AccelerateFlagHasBeenSet() const;

                    /**
                     * 获取桶所在的园区
                     * @return BucketRegion 桶所在的园区
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置桶所在的园区
                     * @param _bucketRegion 桶所在的园区
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取自定义Endpoint
                     * @return Endpoint 自定义Endpoint
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置自定义Endpoint
                     * @param _endpoint 自定义Endpoint
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * 对象存储Bucket名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 映射到的文件系统路径, 默认为/
                     */
                    std::string m_fileSystemPath;
                    bool m_fileSystemPathHasBeenSet;

                    /**
                     * 数据流动的自动策略, 包含加载与沉降。策略可以是多种的组合
按需加载(OnDemandImport)
自动加载元数据(AutoImportMeta)
自动加载数据(AutoImportData)
周期加载(PeriodImport)

周期沉降(PeriodExport)
立即沉降(ImmediateExport)
                     */
                    std::vector<std::string> m_dataRepositoryTaskAutoStrategy;
                    bool m_dataRepositoryTaskAutoStrategyHasBeenSet;

                    /**
                     * 绑定bucket的数据流动策略ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则备注与描述
                     */
                    std::string m_ruleDescription;
                    bool m_ruleDescriptionHasBeenSet;

                    /**
                     * 桶关联状态 0：关联中 1：关联完成
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否使用全球加速域名
                     */
                    bool m_accelerateFlag;
                    bool m_accelerateFlagHasBeenSet;

                    /**
                     * 桶所在的园区
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * 自定义Endpoint
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MAPPEDBUCKET_H_
