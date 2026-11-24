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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDBYSIDREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDBYSIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchCommandBySid请求参数结构体
                */
                class SearchCommandBySidRequest : public AbstractModel
                {
                public:
                    SearchCommandBySidRequest();
                    ~SearchCommandBySidRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话Id</p>
                     * @return Sid <p>会话Id</p>
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置<p>会话Id</p>
                     * @param _sid <p>会话Id</p>
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                    /**
                     * 获取<p>命令，可模糊搜索</p>
                     * @return Cmd <p>命令，可模糊搜索</p>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>命令，可模糊搜索</p>
                     * @param _cmd <p>命令，可模糊搜索</p>
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取<p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * @return Encoding <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置<p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * @param _encoding <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     * 
                     */
                    void SetEncoding(const uint64_t& _encoding);

                    /**
                     * 判断参数 Encoding 是否已赋值
                     * @return Encoding 是否已赋值
                     * 
                     */
                    bool EncodingHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页容量，默认20，最大200</p>
                     * @return Limit <p>每页容量，默认20，最大200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页容量，默认20，最大200</p>
                     * @param _limit <p>每页容量，默认20，最大200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>根据拦截状态进行过滤，1-已放行，2-已阻断，3-复核</p>
                     * @return AuditAction <p>根据拦截状态进行过滤，1-已放行，2-已阻断，3-复核</p>
                     * 
                     */
                    std::vector<uint64_t> GetAuditAction() const;

                    /**
                     * 设置<p>根据拦截状态进行过滤，1-已放行，2-已阻断，3-复核</p>
                     * @param _auditAction <p>根据拦截状态进行过滤，1-已放行，2-已阻断，3-复核</p>
                     * 
                     */
                    void SetAuditAction(const std::vector<uint64_t>& _auditAction);

                    /**
                     * 判断参数 AuditAction 是否已赋值
                     * @return AuditAction 是否已赋值
                     * 
                     */
                    bool AuditActionHasBeenSet() const;

                private:

                    /**
                     * <p>会话Id</p>
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * <p>命令，可模糊搜索</p>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>Cmd字段是前端传值是否进行base64.<br>0:否，1：是</p>
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页容量，默认20，最大200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>根据拦截状态进行过滤，1-已放行，2-已阻断，3-复核</p>
                     */
                    std::vector<uint64_t> m_auditAction;
                    bool m_auditActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDBYSIDREQUEST_H_
