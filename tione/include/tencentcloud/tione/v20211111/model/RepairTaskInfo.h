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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_REPAIRTASKINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_REPAIRTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * cvm维修任务信息
                */
                class RepairTaskInfo : public AbstractModel
                {
                public:
                    RepairTaskInfo();
                    ~RepairTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>维修任务ID</p>
                     * @return TaskId <p>维修任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>维修任务ID</p>
                     * @param _taskId <p>维修任务ID</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型ID<br>// - <code>101</code>：实例运行隐患<br>    // - <code>102</code>：实例运行异常<br>    // - <code>103</code>：实例硬盘异常<br>    // - <code>104</code>：实例网络连接异常<br>    // - <code>105</code>：实例运行预警<br>    // - <code>106</code>：实例硬盘预警<br>    // - <code>107</code>：实例维护升级</p>
                     * @return TaskTypeId <p>任务类型ID<br>// - <code>101</code>：实例运行隐患<br>    // - <code>102</code>：实例运行异常<br>    // - <code>103</code>：实例硬盘异常<br>    // - <code>104</code>：实例网络连接异常<br>    // - <code>105</code>：实例运行预警<br>    // - <code>106</code>：实例硬盘预警<br>    // - <code>107</code>：实例维护升级</p>
                     * 
                     */
                    uint64_t GetTaskTypeId() const;

                    /**
                     * 设置<p>任务类型ID<br>// - <code>101</code>：实例运行隐患<br>    // - <code>102</code>：实例运行异常<br>    // - <code>103</code>：实例硬盘异常<br>    // - <code>104</code>：实例网络连接异常<br>    // - <code>105</code>：实例运行预警<br>    // - <code>106</code>：实例硬盘预警<br>    // - <code>107</code>：实例维护升级</p>
                     * @param _taskTypeId <p>任务类型ID<br>// - <code>101</code>：实例运行隐患<br>    // - <code>102</code>：实例运行异常<br>    // - <code>103</code>：实例硬盘异常<br>    // - <code>104</code>：实例网络连接异常<br>    // - <code>105</code>：实例运行预警<br>    // - <code>106</code>：实例硬盘预警<br>    // - <code>107</code>：实例维护升级</p>
                     * 
                     */
                    void SetTaskTypeId(const uint64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型中文名</p>
                     * @return TaskTypeName <p>任务类型中文名</p>
                     * 
                     */
                    std::string GetTaskTypeName() const;

                    /**
                     * 设置<p>任务类型中文名</p>
                     * @param _taskTypeName <p>任务类型中文名</p>
                     * 
                     */
                    void SetTaskTypeName(const std::string& _taskTypeName);

                    /**
                     * 判断参数 TaskTypeName 是否已赋值
                     * @return TaskTypeName 是否已赋值
                     * 
                     */
                    bool TaskTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreateTime <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p>
                     * @param _createTime <p>任务创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务详情</p>
                     * @return TaskDetail <p>任务详情</p>
                     * 
                     */
                    std::string GetTaskDetail() const;

                    /**
                     * 设置<p>任务详情</p>
                     * @param _taskDetail <p>任务详情</p>
                     * 
                     */
                    void SetTaskDetail(const std::string& _taskDetail);

                    /**
                     * 判断参数 TaskDetail 是否已赋值
                     * @return TaskDetail 是否已赋值
                     * 
                     */
                    bool TaskDetailHasBeenSet() const;

                    /**
                     * 获取<p>产品类型，支持取值：<br>    //<br>    // - <code>CVM</code>：云服务器<br>    // - <code>CDH</code>：专用宿主机<br>    // - <code>CPM2.0</code>：裸金属云服务器</p>
                     * @return Product <p>产品类型，支持取值：<br>    //<br>    // - <code>CVM</code>：云服务器<br>    // - <code>CDH</code>：专用宿主机<br>    // - <code>CPM2.0</code>：裸金属云服务器</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>产品类型，支持取值：<br>    //<br>    // - <code>CVM</code>：云服务器<br>    // - <code>CDH</code>：专用宿主机<br>    // - <code>CPM2.0</code>：裸金属云服务器</p>
                     * @param _product <p>产品类型，支持取值：<br>    //<br>    // - <code>CVM</code>：云服务器<br>    // - <code>CDH</code>：专用宿主机<br>    // - <code>CPM2.0</code>：裸金属云服务器</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * <p>维修任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型ID<br>// - <code>101</code>：实例运行隐患<br>    // - <code>102</code>：实例运行异常<br>    // - <code>103</code>：实例硬盘异常<br>    // - <code>104</code>：实例网络连接异常<br>    // - <code>105</code>：实例运行预警<br>    // - <code>106</code>：实例硬盘预警<br>    // - <code>107</code>：实例维护升级</p>
                     */
                    uint64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * <p>任务类型中文名</p>
                     */
                    std::string m_taskTypeName;
                    bool m_taskTypeNameHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务详情</p>
                     */
                    std::string m_taskDetail;
                    bool m_taskDetailHasBeenSet;

                    /**
                     * <p>产品类型，支持取值：<br>    //<br>    // - <code>CVM</code>：云服务器<br>    // - <code>CDH</code>：专用宿主机<br>    // - <code>CPM2.0</code>：裸金属云服务器</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_REPAIRTASKINFO_H_
