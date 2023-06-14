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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDIMENSIONWEIGHTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDIMENSIONWEIGHTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/WeightInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyDimensionWeight请求参数结构体
                */
                class ModifyDimensionWeightRequest : public AbstractModel
                {
                public:
                    ModifyDimensionWeightRequest();
                    ~ModifyDimensionWeightRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权重信息列表
                     * @return WeightInfoList 权重信息列表
                     * 
                     */
                    std::vector<WeightInfo> GetWeightInfoList() const;

                    /**
                     * 设置权重信息列表
                     * @param _weightInfoList 权重信息列表
                     * 
                     */
                    void SetWeightInfoList(const std::vector<WeightInfo>& _weightInfoList);

                    /**
                     * 判断参数 WeightInfoList 是否已赋值
                     * @return WeightInfoList 是否已赋值
                     * 
                     */
                    bool WeightInfoListHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取是否重刷历史数据
                     * @return Refresh 是否重刷历史数据
                     * 
                     */
                    bool GetRefresh() const;

                    /**
                     * 设置是否重刷历史数据
                     * @param _refresh 是否重刷历史数据
                     * 
                     */
                    void SetRefresh(const bool& _refresh);

                    /**
                     * 判断参数 Refresh 是否已赋值
                     * @return Refresh 是否已赋值
                     * 
                     */
                    bool RefreshHasBeenSet() const;

                private:

                    /**
                     * 权重信息列表
                     */
                    std::vector<WeightInfo> m_weightInfoList;
                    bool m_weightInfoListHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 是否重刷历史数据
                     */
                    bool m_refresh;
                    bool m_refreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDIMENSIONWEIGHTREQUEST_H_
