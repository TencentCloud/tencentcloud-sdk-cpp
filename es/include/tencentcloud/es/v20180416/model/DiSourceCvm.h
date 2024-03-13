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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DISOURCECVM_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DISOURCECVM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入cvm数据源
                */
                class DiSourceCvm : public AbstractModel
                {
                public:
                    DiSourceCvm();
                    ~DiSourceCvm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源所属vpc id，创建后不允许修改
                     * @return VpcId 数据源所属vpc id，创建后不允许修改
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置数据源所属vpc id，创建后不允许修改
                     * @param _vpcId 数据源所属vpc id，创建后不允许修改
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取cvm列表
                     * @return CvmIds cvm列表
                     * 
                     */
                    std::vector<std::string> GetCvmIds() const;

                    /**
                     * 设置cvm列表
                     * @param _cvmIds cvm列表
                     * 
                     */
                    void SetCvmIds(const std::vector<std::string>& _cvmIds);

                    /**
                     * 判断参数 CvmIds 是否已赋值
                     * @return CvmIds 是否已赋值
                     * 
                     */
                    bool CvmIdsHasBeenSet() const;

                    /**
                     * 获取采集路径列表，支持通配符
                     * @return LogPaths 采集路径列表，支持通配符
                     * 
                     */
                    std::vector<std::string> GetLogPaths() const;

                    /**
                     * 设置采集路径列表，支持通配符
                     * @param _logPaths 采集路径列表，支持通配符
                     * 
                     */
                    void SetLogPaths(const std::vector<std::string>& _logPaths);

                    /**
                     * 判断参数 LogPaths 是否已赋值
                     * @return LogPaths 是否已赋值
                     * 
                     */
                    bool LogPathsHasBeenSet() const;

                private:

                    /**
                     * 数据源所属vpc id，创建后不允许修改
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * cvm列表
                     */
                    std::vector<std::string> m_cvmIds;
                    bool m_cvmIdsHasBeenSet;

                    /**
                     * 采集路径列表，支持通配符
                     */
                    std::vector<std::string> m_logPaths;
                    bool m_logPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DISOURCECVM_H_
