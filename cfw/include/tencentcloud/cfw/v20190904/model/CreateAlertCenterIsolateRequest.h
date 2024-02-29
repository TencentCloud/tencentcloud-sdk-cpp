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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERISOLATEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERISOLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAlertCenterIsolate请求参数结构体
                */
                class CreateAlertCenterIsolateRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterIsolateRequest();
                    ~CreateAlertCenterIsolateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处置对象,资产列表
                     * @return HandleAssetList 处置对象,资产列表
                     * 
                     */
                    std::vector<std::string> GetHandleAssetList() const;

                    /**
                     * 设置处置对象,资产列表
                     * @param _handleAssetList 处置对象,资产列表
                     * 
                     */
                    void SetHandleAssetList(const std::vector<std::string>& _handleAssetList);

                    /**
                     * 判断参数 HandleAssetList 是否已赋值
                     * @return HandleAssetList 是否已赋值
                     * 
                     */
                    bool HandleAssetListHasBeenSet() const;

                    /**
                     * 获取处置时间
1  1天
7   7天
-2 永久
                     * @return HandleTime 处置时间
1  1天
7   7天
-2 永久
                     * 
                     */
                    int64_t GetHandleTime() const;

                    /**
                     * 设置处置时间
1  1天
7   7天
-2 永久
                     * @param _handleTime 处置时间
1  1天
7   7天
-2 永久
                     * 
                     */
                    void SetHandleTime(const int64_t& _handleTime);

                    /**
                     * 判断参数 HandleTime 是否已赋值
                     * @return HandleTime 是否已赋值
                     * 
                     */
                    bool HandleTimeHasBeenSet() const;

                    /**
                     * 获取当前日志方向： 0 出向 1 入向
                     * @return AlertDirection 当前日志方向： 0 出向 1 入向
                     * 
                     */
                    int64_t GetAlertDirection() const;

                    /**
                     * 设置当前日志方向： 0 出向 1 入向
                     * @param _alertDirection 当前日志方向： 0 出向 1 入向
                     * 
                     */
                    void SetAlertDirection(const int64_t& _alertDirection);

                    /**
                     * 判断参数 AlertDirection 是否已赋值
                     * @return AlertDirection 是否已赋值
                     * 
                     */
                    bool AlertDirectionHasBeenSet() const;

                    /**
                     * 获取隔离类型 
1 互联网入站
2 互联网出站
4 内网访问
                     * @return IsolateType 隔离类型 
1 互联网入站
2 互联网出站
4 内网访问
                     * 
                     */
                    std::vector<int64_t> GetIsolateType() const;

                    /**
                     * 设置隔离类型 
1 互联网入站
2 互联网出站
4 内网访问
                     * @param _isolateType 隔离类型 
1 互联网入站
2 互联网出站
4 内网访问
                     * 
                     */
                    void SetIsolateType(const std::vector<int64_t>& _isolateType);

                    /**
                     * 判断参数 IsolateType 是否已赋值
                     * @return IsolateType 是否已赋值
                     * 
                     */
                    bool IsolateTypeHasBeenSet() const;

                    /**
                     * 获取运维模式 1 IP白名单 2 身份认证  0 非运维模式
                     * @return OmMode 运维模式 1 IP白名单 2 身份认证  0 非运维模式
                     * 
                     */
                    int64_t GetOmMode() const;

                    /**
                     * 设置运维模式 1 IP白名单 2 身份认证  0 非运维模式
                     * @param _omMode 运维模式 1 IP白名单 2 身份认证  0 非运维模式
                     * 
                     */
                    void SetOmMode(const int64_t& _omMode);

                    /**
                     * 判断参数 OmMode 是否已赋值
                     * @return OmMode 是否已赋值
                     * 
                     */
                    bool OmModeHasBeenSet() const;

                private:

                    /**
                     * 处置对象,资产列表
                     */
                    std::vector<std::string> m_handleAssetList;
                    bool m_handleAssetListHasBeenSet;

                    /**
                     * 处置时间
1  1天
7   7天
-2 永久
                     */
                    int64_t m_handleTime;
                    bool m_handleTimeHasBeenSet;

                    /**
                     * 当前日志方向： 0 出向 1 入向
                     */
                    int64_t m_alertDirection;
                    bool m_alertDirectionHasBeenSet;

                    /**
                     * 隔离类型 
1 互联网入站
2 互联网出站
4 内网访问
                     */
                    std::vector<int64_t> m_isolateType;
                    bool m_isolateTypeHasBeenSet;

                    /**
                     * 运维模式 1 IP白名单 2 身份认证  0 非运维模式
                     */
                    int64_t m_omMode;
                    bool m_omModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERISOLATEREQUEST_H_
