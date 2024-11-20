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
                     * 获取会话Id
                     * @return Sid 会话Id
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置会话Id
                     * @param _sid 会话Id
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
                     * 获取命令，可模糊搜索
                     * @return Cmd 命令，可模糊搜索
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置命令，可模糊搜索
                     * @param _cmd 命令，可模糊搜索
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
                     * 获取Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * @return Encoding Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * 
                     */
                    uint64_t GetEncoding() const;

                    /**
                     * 设置Cmd字段是前端传值是否进行base64.
0:否，1：是
                     * @param _encoding Cmd字段是前端传值是否进行base64.
0:否，1：是
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取每页容量，默认20，最大200
                     * @return Limit 每页容量，默认20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页容量，默认20，最大200
                     * @param _limit 每页容量，默认20，最大200
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
                     * 获取根据拦截状态进行过滤
                     * @return AuditAction 根据拦截状态进行过滤
                     * 
                     */
                    std::vector<uint64_t> GetAuditAction() const;

                    /**
                     * 设置根据拦截状态进行过滤
                     * @param _auditAction 根据拦截状态进行过滤
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
                     * 会话Id
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                    /**
                     * 命令，可模糊搜索
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * Cmd字段是前端传值是否进行base64.
0:否，1：是
                     */
                    uint64_t m_encoding;
                    bool m_encodingHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页容量，默认20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据拦截状态进行过滤
                     */
                    std::vector<uint64_t> m_auditAction;
                    bool m_auditActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHCOMMANDBYSIDREQUEST_H_
