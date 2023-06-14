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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVIRUSLISTEXPORTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVIRUSLISTEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageVirusListExport请求参数结构体
                */
                class DescribeAssetImageVirusListExportRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageVirusListExportRequest();
                    ~DescribeAssetImageVirusListExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取列表支持字段
                     * @return ExportField 列表支持字段
                     * 
                     */
                    std::vector<std::string> GetExportField() const;

                    /**
                     * 设置列表支持字段
                     * @param _exportField 列表支持字段
                     * 
                     */
                    void SetExportField(const std::vector<std::string>& _exportField);

                    /**
                     * 判断参数 ExportField 是否已赋值
                     * @return ExportField 是否已赋值
                     * 
                     */
                    bool ExportFieldHasBeenSet() const;

                    /**
                     * 获取镜像id
                     * @return ImageID 镜像id
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像id
                     * @param _imageID 镜像id
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>Name- String - 是否必填：否 - 镜像名称筛选，</li>
<li>RiskLevel - String - 是否必填：否 - 风险等级  1,2,3,4</li>
                     * @return Filters 过滤条件。
<li>Name- String - 是否必填：否 - 镜像名称筛选，</li>
<li>RiskLevel - String - 是否必填：否 - 风险等级  1,2,3,4</li>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Name- String - 是否必填：否 - 镜像名称筛选，</li>
<li>RiskLevel - String - 是否必填：否 - 风险等级  1,2,3,4</li>
                     * @param _filters 过滤条件。
<li>Name- String - 是否必填：否 - 镜像名称筛选，</li>
<li>RiskLevel - String - 是否必填：否 - 风险等级  1,2,3,4</li>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 列表支持字段
                     */
                    std::vector<std::string> m_exportField;
                    bool m_exportFieldHasBeenSet;

                    /**
                     * 镜像id
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 过滤条件。
<li>Name- String - 是否必填：否 - 镜像名称筛选，</li>
<li>RiskLevel - String - 是否必填：否 - 风险等级  1,2,3,4</li>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEVIRUSLISTEXPORTREQUEST_H_
