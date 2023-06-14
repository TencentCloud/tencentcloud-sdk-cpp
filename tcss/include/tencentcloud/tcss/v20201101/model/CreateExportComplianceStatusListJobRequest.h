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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateExportComplianceStatusListJob请求参数结构体
                */
                class CreateExportComplianceStatusListJobRequest : public AbstractModel
                {
                public:
                    CreateExportComplianceStatusListJobRequest();
                    ~CreateExportComplianceStatusListJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要导出信息的资产类型
                     * @return AssetType 要导出信息的资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置要导出信息的资产类型
                     * @param _assetType 要导出信息的资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取按照检测项导出，还是按照资产导出。true: 按照资产导出；false: 按照检测项导出。
                     * @return ExportByAsset 按照检测项导出，还是按照资产导出。true: 按照资产导出；false: 按照检测项导出。
                     * 
                     */
                    bool GetExportByAsset() const;

                    /**
                     * 设置按照检测项导出，还是按照资产导出。true: 按照资产导出；false: 按照检测项导出。
                     * @param _exportByAsset 按照检测项导出，还是按照资产导出。true: 按照资产导出；false: 按照检测项导出。
                     * 
                     */
                    void SetExportByAsset(const bool& _exportByAsset);

                    /**
                     * 判断参数 ExportByAsset 是否已赋值
                     * @return ExportByAsset 是否已赋值
                     * 
                     */
                    bool ExportByAssetHasBeenSet() const;

                    /**
                     * 获取true, 全部导出；false, 根据IdList来导出数据。
                     * @return ExportAll true, 全部导出；false, 根据IdList来导出数据。
                     * 
                     */
                    bool GetExportAll() const;

                    /**
                     * 设置true, 全部导出；false, 根据IdList来导出数据。
                     * @param _exportAll true, 全部导出；false, 根据IdList来导出数据。
                     * 
                     */
                    void SetExportAll(const bool& _exportAll);

                    /**
                     * 判断参数 ExportAll 是否已赋值
                     * @return ExportAll 是否已赋值
                     * 
                     */
                    bool ExportAllHasBeenSet() const;

                    /**
                     * 获取要导出的资产ID列表或检测项ID列表，由ExportByAsset的取值决定。
                     * @return IdList 要导出的资产ID列表或检测项ID列表，由ExportByAsset的取值决定。
                     * 
                     */
                    std::vector<uint64_t> GetIdList() const;

                    /**
                     * 设置要导出的资产ID列表或检测项ID列表，由ExportByAsset的取值决定。
                     * @param _idList 要导出的资产ID列表或检测项ID列表，由ExportByAsset的取值决定。
                     * 
                     */
                    void SetIdList(const std::vector<uint64_t>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                private:

                    /**
                     * 要导出信息的资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 按照检测项导出，还是按照资产导出。true: 按照资产导出；false: 按照检测项导出。
                     */
                    bool m_exportByAsset;
                    bool m_exportByAssetHasBeenSet;

                    /**
                     * true, 全部导出；false, 根据IdList来导出数据。
                     */
                    bool m_exportAll;
                    bool m_exportAllHasBeenSet;

                    /**
                     * 要导出的资产ID列表或检测项ID列表，由ExportByAsset的取值决定。
                     */
                    std::vector<uint64_t> m_idList;
                    bool m_idListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEEXPORTCOMPLIANCESTATUSLISTJOBREQUEST_H_
