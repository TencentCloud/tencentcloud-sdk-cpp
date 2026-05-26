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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 分析引擎关联关系
                */
                class AnalysisRelationInfo : public AbstractModel
                {
                public:
                    AnalysisRelationInfo();
                    ~AnalysisRelationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源实例Id</p>
                     * @return PrimaryInstanceId <p>源实例Id</p>
                     * 
                     */
                    std::string GetPrimaryInstanceId() const;

                    /**
                     * 设置<p>源实例Id</p>
                     * @param _primaryInstanceId <p>源实例Id</p>
                     * 
                     */
                    void SetPrimaryInstanceId(const std::string& _primaryInstanceId);

                    /**
                     * 判断参数 PrimaryInstanceId 是否已赋值
                     * @return PrimaryInstanceId 是否已赋值
                     * 
                     */
                    bool PrimaryInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎实例Id</p>
                     * @return AnalysisInstanceId <p>分析引擎实例Id</p>
                     * 
                     */
                    std::string GetAnalysisInstanceId() const;

                    /**
                     * 设置<p>分析引擎实例Id</p>
                     * @param _analysisInstanceId <p>分析引擎实例Id</p>
                     * 
                     */
                    void SetAnalysisInstanceId(const std::string& _analysisInstanceId);

                    /**
                     * 判断参数 AnalysisInstanceId 是否已赋值
                     * @return AnalysisInstanceId 是否已赋值
                     * 
                     */
                    bool AnalysisInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>分析引擎关系状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>destroyed： 已销毁</li></ul>
                     * @return Status <p>分析引擎关系状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>destroyed： 已销毁</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>分析引擎关系状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>destroyed： 已销毁</li></ul>
                     * @param _status <p>分析引擎关系状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>destroyed： 已销毁</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createAt <p>创建时间</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateAt <p>更新时间</p>
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * <p>源实例Id</p>
                     */
                    std::string m_primaryInstanceId;
                    bool m_primaryInstanceIdHasBeenSet;

                    /**
                     * <p>分析引擎实例Id</p>
                     */
                    std::string m_analysisInstanceId;
                    bool m_analysisInstanceIdHasBeenSet;

                    /**
                     * <p>分析引擎关系状态</p><p>枚举值：</p><ul><li>creating： 创建中</li><li>running： 运行中</li><li>destroyed： 已销毁</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ANALYSISRELATIONINFO_H_
