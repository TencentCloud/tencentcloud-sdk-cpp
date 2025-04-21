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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELVERSIONLISTREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELVERSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeModelVersionList请求参数结构体
                */
                class DescribeModelVersionListRequest : public AbstractModel
                {
                public:
                    DescribeModelVersionListRequest();
                    ~DescribeModelVersionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取型号类型，只支持传入 netDevice 和 server
                     * @return DeviceType 型号类型，只支持传入 netDevice 和 server
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置型号类型，只支持传入 netDevice 和 server
                     * @param _deviceType 型号类型，只支持传入 netDevice 和 server
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取model-name  型号名称  类型：String  必选：否
                     * @return Filters model-name  型号名称  类型：String  必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置model-name  型号名称  类型：String  必选：否
                     * @param _filters model-name  型号名称  类型：String  必选：否
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否已评估
                     * @return Checked 是否已评估
                     * 
                     */
                    bool GetChecked() const;

                    /**
                     * 设置是否已评估
                     * @param _checked 是否已评估
                     * 
                     */
                    void SetChecked(const bool& _checked);

                    /**
                     * 判断参数 Checked 是否已赋值
                     * @return Checked 是否已赋值
                     * 
                     */
                    bool CheckedHasBeenSet() const;

                    /**
                     * 获取园区ID，当 Checked 参数传 True 时，该参数必须传值
                     * @return CampusId 园区ID，当 Checked 参数传 True 时，该参数必须传值
                     * 
                     */
                    uint64_t GetCampusId() const;

                    /**
                     * 设置园区ID，当 Checked 参数传 True 时，该参数必须传值
                     * @param _campusId 园区ID，当 Checked 参数传 True 时，该参数必须传值
                     * 
                     */
                    void SetCampusId(const uint64_t& _campusId);

                    /**
                     * 判断参数 CampusId 是否已赋值
                     * @return CampusId 是否已赋值
                     * 
                     */
                    bool CampusIdHasBeenSet() const;

                    /**
                     * 获取型号关键字，可以实现模糊匹配搜索功能
                     * @return ModelName 型号关键字，可以实现模糊匹配搜索功能
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置型号关键字，可以实现模糊匹配搜索功能
                     * @param _modelName 型号关键字，可以实现模糊匹配搜索功能
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * 型号类型，只支持传入 netDevice 和 server
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * model-name  型号名称  类型：String  必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否已评估
                     */
                    bool m_checked;
                    bool m_checkedHasBeenSet;

                    /**
                     * 园区ID，当 Checked 参数传 True 时，该参数必须传值
                     */
                    uint64_t m_campusId;
                    bool m_campusIdHasBeenSet;

                    /**
                     * 型号关键字，可以实现模糊匹配搜索功能
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELVERSIONLISTREQUEST_H_
