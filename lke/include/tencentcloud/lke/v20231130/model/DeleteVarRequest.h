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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DeleteVar请求参数结构体
                */
                class DeleteVarRequest : public AbstractModel
                {
                public:
                    DeleteVarRequest();
                    ~DeleteVarRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @return AppBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @param _appBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取<p>变量 ID，可通过 CreateVar；DescribeVar；DescribeVarList 接口返回结果中获取。DeleteVar</p>
                     * @return VarId <p>变量 ID，可通过 CreateVar；DescribeVar；DescribeVarList 接口返回结果中获取。DeleteVar</p>
                     * 
                     */
                    std::string GetVarId() const;

                    /**
                     * 设置<p>变量 ID，可通过 CreateVar；DescribeVar；DescribeVarList 接口返回结果中获取。DeleteVar</p>
                     * @param _varId <p>变量 ID，可通过 CreateVar；DescribeVar；DescribeVarList 接口返回结果中获取。DeleteVar</p>
                     * 
                     */
                    void SetVarId(const std::string& _varId);

                    /**
                     * 判断参数 VarId 是否已赋值
                     * @return VarId 是否已赋值
                     * 
                     */
                    bool VarIdHasBeenSet() const;

                    /**
                     * 获取<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * @return VarModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetVarModuleType() const;

                    /**
                     * 设置<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * @param _varModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetVarModuleType(const uint64_t& _varModuleType);

                    /**
                     * 判断参数 VarModuleType 是否已赋值
                     * @return VarModuleType 是否已赋值
                     * 
                     */
                    bool VarModuleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * <p>变量 ID，可通过 CreateVar；DescribeVar；DescribeVarList 接口返回结果中获取。DeleteVar</p>
                     */
                    std::string m_varId;
                    bool m_varIdHasBeenSet;

                    /**
                     * <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_varModuleType;
                    bool m_varModuleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DELETEVARREQUEST_H_
