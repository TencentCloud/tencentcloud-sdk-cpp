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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * BindCls请求参数结构体
                */
                class BindClsRequest : public AbstractModel
                {
                public:
                    BindClsRequest();
                    ~BindClsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取CLS地域
                     * @return ClsRegion CLS地域
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置CLS地域
                     * @param _clsRegion CLS地域
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                    /**
                     * 获取CLS 日志集id
                     * @return ClsLogsetId CLS 日志集id
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 设置CLS 日志集id
                     * @param _clsLogsetId CLS 日志集id
                     * 
                     */
                    void SetClsLogsetId(const std::string& _clsLogsetId);

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取CLS 日志主题ID
                     * @return ClsTopicId CLS 日志主题ID
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 设置CLS 日志主题ID
                     * @param _clsTopicId CLS 日志主题ID
                     * 
                     */
                    void SetClsTopicId(const std::string& _clsTopicId);

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * CLS地域
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                    /**
                     * CLS 日志集id
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * CLS 日志主题ID
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BINDCLSREQUEST_H_
